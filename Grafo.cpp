// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Grafo.cpp" ------------------------------------------------- */
/* Contem os metodos e atributos da classe Grafo */
#include "Grafo.h"

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

// Construtor
Grafo::Grafo (string arquivo){
    palavrasComPontuacao = separarPalavras (arquivo) ;

    criaVertices();
    checarRepeticoesVertices();
    criaArestas();
    checarRepeticoesArestas();
}

void Grafo::palavraMaisUtilizada(){
  string maisAparece;
  int peso = 0;
  for (long unsigned int i = 0 ; i < vertices.size() ; i++){
    if (vertices[i].peso > peso){
      
      maisAparece = vertices[i].getNome();
      peso = vertices[i].peso ;
    }
  }
  cout << "A palavra que mais aparece eh \" " << maisAparece << " \"" << endl;
}

void Grafo::sequenciaMaisUtilizada(){
  string maisAparece;
  int peso = 0;
  for (long unsigned int i = 0 ; i < arestas.size() ; i++){
    if (arestas[i].peso > peso){
      maisAparece = arestas[i].getInicio().getNome() + " " + arestas[i].getFim().getNome();
      peso = arestas[i].peso ;
    }
  }
  cout << "A expressao que mais aparece eh \" " << maisAparece << " \"" << endl;
}

/*void Grafo::criaSequencia(int n){
  for (int i = 0 ; i < n ; i++){
    if (i != 0 && palavrasComPontuacao[i-1].back() != '.'
               && palavrasComPontuacao[i-1].back() != ','
               && palavrasComPontuacao[i-1].back() != '!'
               && palavrasComPontuacao[i-1].back() != '?'
               && palavrasComPontuacao[i-1].back() != ':'
               && palavrasComPontuacao[i-1].back() != ';')
    sequenciaDePalavras.push_back(palavrasComPontuacao[i]);
  }
}

void Grafo::palavrasConsecutivas(int n){
  criaSequencia(n);

} */

void Grafo::criaArestas(){
  for (long unsigned int indice = 0 ; indice < palavrasComPontuacao.size() -1 ; indice++)
    if (palavrasComPontuacao[indice].back() != '.' && palavrasComPontuacao[indice].back() != ','
        && palavrasComPontuacao[indice].back() != '!' && palavrasComPontuacao[indice].back() != '?'
        && palavrasComPontuacao[indice].back() != ':' && palavrasComPontuacao[indice].back() != ';')
    {
      Vertice &inicioAresta = getVerticeComNome (palavrasComPontuacao[indice]);
      Vertice &fimAresta = getVerticeComNome (palavrasComPontuacao[indice+1]);
      Aresta aresta(inicioAresta, fimAresta);
      arestas.push_back(aresta);
    }
}

Vertice &Grafo::getVerticeComNome(string nome){
  if (nome.back() == '.' || nome.back() == ',' || nome.back() == '!' 
      || nome.back() == '?' || nome.back() == ':' || nome.back() == ';')
    nome.pop_back();
  for (long unsigned int indice = 0 ; indice < vertices.size() ; indice++)
    if (vertices[indice].getNome() == nome)
      return vertices[indice];
  return vertices[0];
}

void Grafo::criaVertices(){
  for (long unsigned int indice = 0 ; indice < palavrasComPontuacao.size() ; indice++){
        Vertice vertice (palavrasComPontuacao[indice]);
        vertices.push_back(vertice);
    }
}

// Chca se ha vertices repetidas, Adicionando peso a eles
void Grafo::checarRepeticoesVertices(){
  for (long unsigned int indice = 0 ; indice < vertices.size() ; indice++){
      for (long unsigned int indice2 = 0 ; indice2 < vertices.size() ; indice2++)
        if (indice2 != indice)
          if (vertices[indice].getNome() == vertices[indice2].getNome()){
            vertices.erase(vertices.begin() + indice2);
            vertices[indice].peso += 1;
          }
    }
}

// Chca se ha arestas repetidas, Adicionando peso as arestas
void Grafo::checarRepeticoesArestas(){
  for (long unsigned int indice = 0 ; indice < arestas.size() ; indice++){
      for (long unsigned int indice2 = 0 ; indice2 < arestas.size() ; indice2++)
        if (indice2 != indice)
          if ((arestas[indice].getInicio().getNome() == arestas[indice2].getInicio().getNome()) && (arestas[indice].getFim().getNome() == arestas[indice2].getFim().getNome())){
            arestas.erase(arestas.begin() + indice2);
            arestas[indice].peso += 1;
          }
    }
}

// Separa as palavras de um arquivo e retorna um Vetor de palavras
vector <string> Grafo::separarPalavras(string nomeDoArquivo){

  vector <string> paragrafos , palavrasSeparadas;
  string palavra ;
  long unsigned int indice1, indice2 ;

  paragrafos = readLines (nomeDoArquivo);

  for (indice1 = 0 ; indice1 < paragrafos.size() ; indice1++) {
    string paragrafo = paragrafos[indice1];

    for(indice2=0 ; indice2 < paragrafo.length() ; indice2++) {
      if(paragrafo[indice2] != ' '){
        palavra.push_back(paragrafo[indice2]);
        if (indice2 == paragrafo.length() -1)
          palavrasSeparadas.push_back(palavra);
      }
      else {
        palavrasSeparadas.push_back(palavra);
        palavra = "";
      }
    }
  }
  return palavrasSeparadas;
}

//Le um arquivo e devolve os paragrafos como strings separadas em um vetor 
vector <string> Grafo::readLines (string arquivo){

  vector <string> vetor;
  string linha;

  ifstream file(arquivo);
  
  while (getline(file, linha)) {
    vetor.push_back(linha);
  }
  return vetor;
}

void Grafo::printarVetores(){
  cout << "TAM ARESTAS:   " << arestas.size() << endl ;
  for (long unsigned int i = 0 ; i < arestas.size() ; i++)
    cout << arestas[i].getInicio().getNome() << " " << arestas[i].getFim().getNome() << " "<< arestas[i].peso << endl ;
  
}