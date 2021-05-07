CPP = g++
CPPFLAGS = -Wall

OBJS = main.o Aresta.o Grafo.o Vertice.o

trabalho: $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJS)