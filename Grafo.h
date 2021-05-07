// Autora: Ana Clara Loureiro Cruz
// Data: 06-05-2021

/*  TRABALHO 2 - LING PROG  */
    // Contar o numero de aparicoes de uma palavra e de uma associacao
    // de palavras em um texto

/* "Grafo.h" ------------------------------------------------- */
/* Inicializa a classe Grafo */

#include <string>
#include <vector>

#include "Vertice.h"
#include "Aresta.h"

using namespace std; 

class Grafo {
    public:
        // Construtor - recebe um arquivo
        Grafo (string);

        Vertice getVerticeComNome(string);

        void criaVertices();
        void criaArestas();
        void printarVetores();

    private:
        vector <Vertice> vertices;
        vector <Aresta> arestas; 

        vector <string> palavrasComPontuacao;

        void checarRepeticoes();
        void checarRepeticoesArestas();
        void checarRepeticoesVertices();

        // Read lines from a file (recebe um arquivo)
        vector <string> readLines (string);

        // Separa as palavras de um arquivo (recebe um arquivo e devolve uma lista de palavras)
        vector <string> separarPalavras(string);


};