#include <stdio.h>
#include <stdlib.h>

#define VERDADEIRO 1
#define FALSO 0

typedef struct{
    int *dados;
    int topo;
    int capacidade;
} t_pilha;

void constroi_pilha(t_pilha *p, int capacidade);
int tamanho (t_pilha *p);
int esta_vazia (t_pilha *p);
int esta_cheia (t_pilha *p);
int empilha (t_pilha *p, int n);
int desempilha(t_pilha *p, int *num);

void constroi_pilha(t_pilha *p, int capacidade){
    p->dados = (int *) malloc(capacidade * sizeof(int));
    p->topo = 0;
    p->capacidade = capacidade;
}

int tamanho (t_pilha *p){
    return p->topo;
}

int esta_vazia(t_pilha *p){
    if(p->topo == 0)
        return VERDADEIRO;
    else
        return FALSO;
}

int esta_cheia(t_pilha *p){
    if(p->topo == p->capacidade)
        return VERDADEIRO;
    else
        return FALSO;
}

int empilha(t_pilha *p, int n){
    if(esta_cheia(p))
        return FALSO;
    else
        p->dados[p->topo] = n;
        p->topo++;
        return VERDADEIRO;
}

int desempilha(t_pilha *p, int *num){
    if(esta_vazia(p))
        return FALSO;
    else{
        p->topo--;
        *num = p->dados[p->topo];
        return VERDADEIRO;
    }
}

int main(){
    t_pilha p;
    int valor;

    constroi_pilha(&p, 3);

    printf("Esta vazia? %d\n", esta_vazia(&p));

    empilha(&p, 10);
    empilha(&p, 20);
    empilha(&p, 30);

    printf("Tamanho: %d\n", tamanho(&p));

    printf("Esta cheia? %d\n", esta_cheia(&p));

    desempilha(&p, &valor);

    printf("Valor retirado: %d\n", valor);

    printf("Tamanho atual: %d\n", tamanho(&p));

    desempilha(&p, &valor);
    desempilha(&p, &valor);

    printf("Esta vazia? %d\n", esta_vazia(&p));

    return 0;
}