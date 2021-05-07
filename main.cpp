// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK      0

#include "Grafo.h"

#include <fstream>

using namespace std ;

int main (){
    Grafo grafo ("Teste.txt");

    grafo.printarVetores();

    return OK;
}