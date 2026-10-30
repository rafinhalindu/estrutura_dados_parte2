#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;
    int topo;
    int capacidade;
} t_pilha;

int empilha(t_pilha *p, int n);

int empilha(t_pilha *p, int n){
    if(esta_cheia(p))
        return 0;
    else
        p->dados[p->topo] = n;
        p->topo++;
        return 1;
}