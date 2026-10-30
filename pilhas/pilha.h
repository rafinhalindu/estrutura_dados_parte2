#include <stdlib.h>
#include <stdio.h>

#define SUCESSO 1
#define FRACASSO 0

typedef struct{
    int * dados; //ponteiro de inteiro, modifica a variável não o tipo
    int topo;
    int capacidade;
    //int *dados, topo; //declaro o topo como inteiro e o dados como ponteiro de inteiro;
} t_pilha; //quando uso typedf, digo que "esse pacote recebe o nome tipo pilha (t_pilha)".

void constroi_pilha(int, t_pilha *);

int empilha(t_pilha *, int); //retorno SUCESSO ou FRACASSO;
//parametros a pilha por referencia (pode ser alterada e o inteiro de entrada)
int desempilha(t_pilha *, int *); //se ta alterando dado, tem que ser por referência, por isso o ponteiro
//retorno é SUCESSO ou FRACASSO;
//Os parâmetros: a pilha por referência (pode ser alterada) e o inteiro de saída por referência (o valor desempilhado e poder ser alterado)
int tamanho (t_pilha *);
int esta_vazia(t_pilha *);
int esta_cheia(t_pilha *);
void exibir_de_cima_pra_baixo (t_pilha *);
int extrai_abaixo_do_topo (t_pilha *);
int valor_topo (t_pilha *);
void amassa_topo(t_pilha *, int);
void amassa_pilha (t_pilha *, int);
//toda variavel passada por referencia só tem duas funçãos, será modificado no futuro e/ou para limpar memoria