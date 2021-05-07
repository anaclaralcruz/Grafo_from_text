// Autora: Ana Clara Loureiro Cruz
// Data: 22-04-2021

/*  TRABALHO 1 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "files.cpp" ------------------------------------------------- */
/* Contem as funcoes necessarias para manipular os dados de entrada */

#include "files.h"

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;


//Le um arquivo e devolve os paragrafos como strings separadas em um vetor 
vector <string> readLines (string arquivo){

  vector <string> vetor;
  string linha;

  ifstream file(arquivo);
  
  while (getline(file, linha)) {
    vetor.push_back(linha);
  }
  return vetor;
}

// Separa as palavras de um arquivo e retorna um Vetor de palavras
vector <string> separarPalavras(string nomeDoArquivo){

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