#include <stdio.h>
#include <stdlib.h>

void troca(int v[], int i, int j);
void bubble_sort(int v[], int tamanho);

void troca(int v[], int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void bubble_sort(int v[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - 1 - i; j++){
            if(v[j] > v[j+1]){
                troca(v, j, j + 1);
            }
        }
    }
}

int main(){
    int v[] = {7, 2, 5, 1, 4};
    int tamanho = 5;
    int i;
    printf("Vetor original: ");
    for(i = 0; i < tamanho; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    bubble_sort(v, tamanho);

    printf("Vetor orderado com bubble sort: ");

    for(i = 0; i<tamanho; i++){
        printf("%d ", v[i]);
    }

    return 0;
}