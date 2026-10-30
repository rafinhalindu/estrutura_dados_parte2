#include <stdio.h>
#include <stdlib.h>

void troca(int v[], int i, int j);
void bubble_sort(int v[], int tamanho);

void troca(int v[], int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void bubbleSort(int v[], int tamanho){
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - 1 - i; j++){
            if (v[j] > v[j + 1]) {
                troca(v, j, j + 1);
            }
        }
    }
}