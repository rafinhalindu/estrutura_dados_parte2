#include <stdio.h>
#include <stdlib.h>

int *cria_vetor(int tamanho);
void libera_vetor(int *v);
void preenche_vetor(int *v, int qntd_posicoes);
void exibe_vetor(int *v, int qntd_posicoes);
int soma(int *v, int qntd_posicoes);

int *cria_vetor(int tamanho){
    int *v = (int *) malloc(tamanho * sizeof(int));

    return v;
}

void libera_vetor(int *v){
    free(v);
}

void preenche_vetor(int *v, int qntd_posicoes){
    int i, valor;
    
    printf("Digite o tamanho do vetor:\n");
    for(i=0; i<qntd_posicoes; i++){
        printf("Valor da posicao %d: ", i);
        scanf("%d", &valor);

        v[i] = valor;
    }
}

void exibe_vetor(int *v, int qntd_posicoes){
    for (int i = 0; i < qntd_posicoes; i++) {
        printf("Posicao %d: %d\n", i, v[i]);
    }
}

int soma(int *v, int qntd_posicoes){
    int soma = 0;
    int i;
    for(i=0; i<qntd_posicoes; i++){
        soma+=v[i];
    }
    return soma;
}