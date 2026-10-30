#include <stdio.h>
#include <stdlib.h>

int *cria_vetor(int tamanho);
int soma_vetor(int *v, int tamanho);

int *cria_vetor(int tamanho){
    int *v = (int *) malloc(tamanho * sizeof(int));

    return v;
}

int soma_vetor(int *v, int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma++;
    }
    return soma;
}