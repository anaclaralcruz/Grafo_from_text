// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Grafo.cpp" ------------------------------------------------- */
/* Contem os metodos e atributos da classe Grafo */

#include "Vertice.h"

Vertice::Vertice (string palavra){
    if (palavra[-1] == '.' || palavra[-1] == ',')
        palavra.pop_back();
    nome = palavra;
    peso = 1;
}

string Vertice::getNome(){
    return nome;
}

