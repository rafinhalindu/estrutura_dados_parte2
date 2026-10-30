#include <stdio.h>
#include <stdlib.h>

void troca(int v[], int i, int j);
int particiona(int v[], int ini, int fim);
void quicksort(int v[], int ini, int fim);

void troca(int v[], int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int particiona(int v[], int ini, int fim){
    int pivo = v[fim];
    int i = ini - 1;

    for(int j = ini; j < fim; j++){
        if(v[j] <= pivo){
            i++;
            troca(v, i, j);
        }
    }
    troca(v, i + 1, fim);
    return i + 1;
}

void quicksort(int v[], int ini, int fim){
    if(ini<fim){
        int p = particiona(v, ini, fim);

        quicksort(v, ini, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main(){
    int v[] = {7, 2, 5, 1, 4};
    int tamanho = 5;
    int i;

    printf("Vetor original:");
    for(i = 0; i < tamanho; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    quicksort(v, 0, tamanho - 1);

    printf("Vetor organizado:");
    for(i = 0; i < tamanho; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}