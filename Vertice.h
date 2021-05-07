// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Vertice.h" ------------------------------------------------- */
/* Inicializa a classe Vertice */

#include <string>

using namespace std; 

#ifndef VERTICE_H
#define VERTICE_H

class Vertice {
    public:
        // Construtor - recebe uma palavra
        Vertice (string = "Palavra");

        int peso;
        string getNome();

    private:
        string nome;
};

#endif