#include <stdio.h>
#include <stdlib.h>

int *cria_vetor(int tamanho);

int *cria_vetor(int tamanho){
    int *v = (int *) malloc(tamanho * sizeof(int));

    return v;
}