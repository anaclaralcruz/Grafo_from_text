// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Aresta.cpp" ------------------------------------------------- */
/* Contem os metodos e atributos da classe Aresta */

#include "Aresta.h"

Aresta::Aresta (Vertice& inicioAresta, Vertice& fimAresta){
    inicio = inicioAresta;
    fim = fimAresta;
    peso = 1;
}

Vertice Aresta::getInicio(){
    return inicio;
}

Vertice Aresta::getFim(){
    return fim;
}