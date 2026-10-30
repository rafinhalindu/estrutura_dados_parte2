#include <stdio.h>
#include <stdlib.h>

#define FRACASSO  0
#define SUCESSO  1

typedef struct {
    int *v;
    int ocupacao;
    int capacidade;
 } t_vetor;

void inicia_vetor (t_vetor *, int);
void exibe_vetor (t_vetor *p_vetor);
int esta_cheio (t_vetor *);
int insere (int, t_vetor *);

int main() {
    t_vetor vetor;
    printf("Digite a capacidade do vetor: ");
    int capacidade;
    scanf("%d", &capacidade);
    printf("Endereco do vetor: %p\n", &vetor);
    inicia_vetor (&vetor, capacidade);
    if(insere(10, &vetor)){
        printf("10 inserido com sucesso!\n");
    }else{
        printf("Não foi possível realizar a insercao\n");
    }
    exibe_vetor (&vetor);
    return 0;
}

void inicia_vetor (t_vetor *p_vetor, int capacidade){
    p_vetor -> v = (int *) malloc (capacidade * sizeof(int)); //malloc aloca memória //capacidade ta dizendo quanto precisa para armazenamento //sizeof(int) diz o numero inteiro
    printf("Endereco do vetor dentro da estrutura: %p\n", p_vetor->v);
    p_vetor -> ocupacao = 0;
    p_vetor -> capacidade = capacidade;
    
}

int esta_cheio (t_vetor *p_vetor) {
    if (p_vetor -> capacidade == p_vetor -> ocupacao){
        return 1;
    }else{
        return 0;
    }
    // return p_vetor -> capacidade == p_vetor -> ocupacao; //forma avançada de fazer
    //parametros para qualquer vetor é o elemento e o vetor
}

int insere (int i, t_vetor *p_vetor){
    if (esta_cheio(p_vetor)) {
        return FRACASSO; //fracasso
    }else{
        p_vetor -> v [p_vetor -> ocupacao] = i;
        p_vetor -> ocupacao ++;
        return SUCESSO; //sucesso
    }
}

void exibe_vetor (t_vetor *p_vetor){
    printf("ocupacao = %d\n", p_vetor -> ocupacao);
    printf("capacidade = %d\n", p_vetor -> capacidade);
    printf("O vetor: ");
    for(int i = 0; i < p_vetor -> ocupacao;i++){
        printf("%d ", p_vetor -> v[i]);
    }
    for (int i = p_vetor -> ocupacao; i < p_vetor -> capacidade; i++){
        printf("__ ");
    }
    printf("\n");
}