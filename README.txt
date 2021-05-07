Autora: Ana Clara Loureiro Cruz
UFRJ - DEL - ENGENHARIA ELETRONICA E DE COMPUTACAO
Trabalho de Ling Prog
Programa feito em c++

---------------------- PROJETO PARA CRIAR UM GRAFO COM BASE EM UM TEXTO ---------------------

Este programa tem como objetivo criar um grafo a partir de um arquivo txt. No grafo, as 
palavras sao vertices e as arestas identificam quais palavras estao em sequencia.
No menu, estao seguintes funcionalidades:
1. Exibir a palavra que mais aparece no texto (vertice com maior peso);
2. Exibir a expressao de 2 palavras que mais aparece no texto (aresta com maior peso);
3. 

---------------------------------- MANUAL DO PROGRAMA ---------------------------------------

ULTILIZACAO
    - Abrir pasta
    - Compilar e linkeditar o programa usando o comando "make"
    - Inicializar o executavel "./trabalho"
    (um menu aparecera na tela com as opcoes)
    - insira o numero correspondente a opcao que deseja, o resultado aparecera na tela.

ENTRADA DE DADOS:
    A entrada deve ser feita atraves de um Arquivo .txt contendo o texto a ser analisado.

    Um exemplo de arquivo de entrada esta anexado com o nome "Entrada.txt".
    Para alterar o nome do arquivo de entrada, a macro ARQUIVO_DE_ENTRADA no "main.cpp" deve 
    ser alterada com o nome do arquivo.

------------------------- ARQUIVOS ---------------------------------------------------------

"Aresta.cpp"        Contem os metodos referentes a classe Aresta
"Aresta.h"          Inicializa a classe Aresta
"Grafo.cpp"         Contem os metodos referentes a classe Grafo
"Grafo.h"           Inicializa a classe Grafo
"Vertice.cpp"       Contem os metodos referentes a classe Vertice
"Vertice.h"         Inicializa a classe Vertice
"main.cpp"          Programa principal que contem o menu do programa
"Makefile"          Realiza a compilacao e linkedicao do programa
"Entrada.txt"       Arquivo que contem o texto que vai ser analisado