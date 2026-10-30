#include <stdio.h>
#include <stdlib.h>

int main (){

    //int v[]; nao pode declarar um vetor indefinido (vazio) tamanho indefinido
    int *v, t; //ponteiro de inteiro; o asterisco '*' declara que aquela variável é um ponteiro
    float *x; //ponteiro de float

    printf("digite o tamanho do vetor: ");
    scanf("%d", &t);

    v = (int *) malloc (t * sizeof(int));
    x = (float *) malloc (t * sizeof(float));
    
    printf("tamanho de v: %d\n", sizeof(v));
    printf("tamanho de x: %d", sizeof(x));
    return 0;
}