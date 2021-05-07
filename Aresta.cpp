// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Aresta.cpp" ------------------------------------------------- */
/* Contem os metodos e atributos da classe Aresta */

#include "Aresta.h"

Aresta::Aresta (string nomeInicio , string nomeFim, vector <Vertice> vertices){
    for (unsigned long int i = 0 ; i < vertices.size() ; i++)
        if (vertices[i].getNome == nomeInicio)
            inicio = vertices[i];
        if (vertices[i].getNome == nomeFim)
            fim = vertices[i];
}

Vertice Aresta::getInicio(){
    return inicio;
}

Vertice Aresta::getFim(){
    return fim;
}
