// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "main.cpp" ------------------------------------------------- */
/* Funcao principal que contem o menu do programa */

#define OK      0
#define ARQUIVO_DE_ENTRADA  "Entrada.txt"

#include "Grafo.h"

#include <fstream>
#include <iostream>

using namespace std ;

int main (){
    int opcaoMenu;

    Grafo grafo (ARQUIVO_DE_ENTRADA);

    // Menu de entrada:
    cout << " ______________________________________________________" << endl;
    cout << "| 1 | Palavra mais usada no texto                     |" << endl;
    cout << "| 2 | Sequencia de duas palavras mais usadas no texto |" << endl;
    cout << "| 3 | Sequencia de N palavras mais usadas no texto    |" << endl;
    cout << "|_____________________________________________________|" << endl;
    cout << "O que deseja? (digite o numero) -> ";
    cin >> opcaoMenu ;
    cout << endl;

    if (opcaoMenu == 1)
        grafo.palavraMaisUtilizada();

    else if (opcaoMenu == 2)
        grafo.sequenciaMaisUtilizada();

    else if (opcaoMenu == 3)
        grafo.palavrasConsecutivas();
    
    else
        cout << "ERRO - Entrada invalida, selecione um numero de 1 a 3" << endl ;

    cout << endl ;
    return OK;
}