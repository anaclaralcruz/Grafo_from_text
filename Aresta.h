// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Aresta.h" ------------------------------------------------- */
/* Inicializa a classe Aresta */

#include <string>

#include <vector>

#include "Vertice.h"

using namespace std; 


class Aresta {
    public:
        // Construtor
        Aresta(string, string, vector <Vertice>);

        Vertice getInicio();
        Vertice getFim();
        int peso;

    private:
        Vertice inicio;
        Vertice fim;


};