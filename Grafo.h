// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Grafo.h" ------------------------------------------------- */
/* Inicializa a classe Grafo */

#include <string>

#include "vertice.h"

using namespace std; 

class Grafo {
    public:
        // Construtor - recebe um arquivo
        Grafo (string);

    private:
        Vector <Vertice> vertices;

        Vertice criarVertice(string);

        // Read lines from a file (recebe um arquivo)
        vector <string> readLines (string);

        // Separa as palavras de um arquivo (recebe um arquivo e devolve uma lista de palavras)
        vector <string> separarPalavras(string);


};