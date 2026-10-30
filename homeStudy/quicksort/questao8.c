#include <stdio.h>
#include <stdlib.h>

void quicksort(int v[], int ini, int fim){
    if(ini < fim){
        int p = particiona(v, ini, fim);

        quicksort(v, ini, p - 1);
        quicksort(v, p + 1, fim);
    }
}