// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Grafo.cpp" ------------------------------------------------- */
/* Contem os metodos e atributos da classe Grafo */

#include "Vertice.h"
#include "Aresta.h"

Vertice::Vertice (string palavra){
    if (palavra.back() == '.' || palavra.back() == ',' || palavra.back() == '!'
        || palavra.back() == '?' || palavra.back() == ':' || palavra.back() == ';')
        palavra.pop_back();
    nome = palavra;
    peso = 1;
}

string Vertice::getNome(){
    return nome;
}