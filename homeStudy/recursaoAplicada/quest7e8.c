#include <stdio.h>
#include <stdlib.h>>

int fatorial(int n);
int potencia(int base, int expoente);

int fatorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else{
        return base * potencia(base, expoente -1);
    }
}