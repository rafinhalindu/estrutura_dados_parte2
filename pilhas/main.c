#include "pilha.h"

int main(){

    t_pilha pilha;
    constroi_pilha(5, &pilha);

    exibir_de_cima_pra_baixo(&pilha);
    empilha(&pilha, 10);
    empilha(&pilha, 20);
    empilha(&pilha, 30);
    exibir_de_cima_pra_baixo(&pilha);
    int desempilhado;
    desempilha(&pilha, &desempilhado);
    exibir_de_cima_pra_baixo(&pilha);
    desempilhado = extrai_abaixo_do_topo(&pilha);
    printf("Valor extraído abaixo do topo: %d\n", desempilhado);    
    exibir_de_cima_pra_baixo(&pilha);
    empilha(&pilha, 15);
    empilha(&pilha, 5);
    exibir_de_cima_pra_baixo(&pilha);
    amassa_topo(&pilha, 10);
    exibir_de_cima_pra_baixo(&pilha);
    amassa_pilha(&pilha,18);
    exibir_de_cima_pra_baixo(&pilha);
    return 0;
}