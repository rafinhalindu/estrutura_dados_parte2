#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *dados;
    int topo;
    int capacidade;
} t_pilha;

int empilha(t_pilha *p, int n);
int desempilha(t_pilha *p, int *num);

int empilha(t_pilha *p, int n){
    if(esta_cheio(p))
        return 0;
    else{
        p->dados[p->topo] = n;
        p->topo++;
        return 1;
    }
}

int desempilha(t_pilha *p, int *num){
    if(esta_vazio(p))
        return 0;
    else{
        p->topo--;
        *num = p->dados[p->topo];
        return 1;
    }
    
}