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

    for(int j = ini; j < fim; j++) {
        if (v[j] <= pivo){
            i++;
            troca(v, i, j);
        }
    }
    troca(v, i + 1, fim);
    return i + 1;
}

void quicksort(int v[], int ini, int fim){
    if(ini < fim){
        int p = particiona(v, ini, fim);

        quicksort(v, ini, p - 1);
        quicksort(v, p + 1, fim);
    }
}