#include <stdio.h>

struct s/*tag da struct*/ {
    int numero;
    char letra;
}estrutura;

typedef struct{
    float a;
    int b;
}minha_struct;

int main () {
    int v[10]; 
    struct s s1;
    printf("Tamanho do int neste compilador: %d bytes\n", sizeof(int));
    printf("Tamanho do float neste compilador: %d bytes\n", sizeof(float));
    printf("Tamanho do char neste compilador: %d bytes\n", sizeof(char));
    printf("tamanho do vetor v: %d bytes\n", sizeof(v));
    printf("tamanho da struct definida: %d bytes\n", sizeof(s1));

    return 0;
}
