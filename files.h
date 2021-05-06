// Autora: Ana Clara Loureiro Cruz
// Data: 22-04-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "files.h" ------------------------------------------------- */
/* Inicializa as funcoes para manipulacao de arquivo */

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

vector <string> readLines (string);
vector <string> separarPalavras(string nomeDoArquivo);