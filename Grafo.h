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
        
        // Funcoes de printar na tela
        void palavraMaisUtilizada();
        void sequenciaMaisUtilizada();
        void palavrasConsecutivas();

    private:
        vector <Vertice> vertices;      // Array de objetos da classe Vertice
        vector <Aresta> arestas;        // Array de objetos da classe Aresta

        vector <string> palavrasComPontuacao;   // Lista de palavras com pontuacao

        vector <vector<string>> sequenciaDePalavras;

        // Cria a array de objetos da classe Vertice
        void criaVertices();
        // Cria a array de objetos da classe Aresta
        void criaArestas();

        // Checar a existencia de arestas repetidas
        void checarRepeticoesArestas();
        // Checar a existencia de vertices repetidos
        void checarRepeticoesVertices();

        // Procura um vertice com o nome desejado e devolve um Vertice da lista por referencia
        Vertice& getVerticeComNome(string);
        // Cria um vetor com uma sequencia de palavras
        void criaVetorSequencia(long unsigned int);
        // Printa na tela sequencia de N palavras que mais aparece no texto
        void encontraMaiorSequencia(long unsigned int);

        // Read lines from a file (recebe um arquivo)
        vector <string> readLines (string);
        // Separa as palavras de um arquivo (recebe um arquivo e devolve uma lista de palavras)
        vector <string> separarPalavras(string);
};