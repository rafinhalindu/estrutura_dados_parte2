#include <stdio.h>
#include <stdlib.h>

void bubblesort(int v[], int tamanho);

void bubblesort(int v[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - 1 - i; j++){
            if(v[j] < v[j + 1]){
                troca(v, j, j + 1);
            }
        }
    }
}