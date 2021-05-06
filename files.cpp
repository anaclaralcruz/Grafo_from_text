// Autora: Ana Clara Loureiro Cruz
// Data: 22-04-2021

/*  TRABALHO 1 - LING PROG  */
    // Analise da media movel dos casos de COVID no Brasil

/* "files.cpp" ------------------------------------------------- */
/* Contem as funcoes necessarias para manipular os dados de entrada */

#include "files.h"
#include <string>

//Le um arquivo e devolve as linhas separadas em um vetor 
vector <string> readLines (string arquivo){

  vector <string> vetor;
  string linha;

  ifstream file(arquivo);
  
  while (getline(file, linha)) {
    vetor.push_back(linha);
  }
  return vetor;
}

