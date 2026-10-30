#include "pilha.h" //entre aspas é uma biblioteca não padrão, criada por mim
//------------------------------------------------------------------------------------------------------
void constroi_pilha(int capacidade, t_pilha *p){
    p -> dados = (int *) malloc(sizeof(int) * capacidade);
    p -> topo = 0;
    p -> capacidade = capacidade;
}
//----------------------------------------------------------------------------------------------------------------------
int empilha( t_pilha *p, int i){
    if (esta_cheia(p)) return FRACASSO;
    p -> dados [p->topo] = i;
    return SUCESSO;
}
//----------------------------------------------------------------------------------------------------------------------
int desempilha(t_pilha *p, int *i){
    if(esta_vazia(p)) return FRACASSO;
    *i  = p-> dados[--p->topo];
    return SUCESSO;
} //se ta alterando dado, tem que ser por referência, por isso o ponteiro
//----------------------------------------------------------------------------------------------------------------------
int tamanho (t_pilha *p){
    return p->topo;
}
//---------------------------------------------------------------------------------------------------------------------
int esta_vazia(t_pilha *p){
    return p-> topo ==0;
}
//---------------------------------------------------------------------------------------------------------------------
int esta_cheia(t_pilha *p){
    if ( p -> topo == p -> capacidade){
        return 1; //pilha cheia
    } else{
        return 0; //pilha não cheia
    }
}
//---------------------------------------------------------------------------------------------------------------
void exibir_de_cima_pra_baixo(t_pilha *p){
    if (esta_vazia(p)){
        printf("pilha vazia\n");
    }
    else{
        for (int i = p -> topo-1; i>=0; i--){
            printf("[%2d]: %d\n", i+1, p->dados[i]);
        }
        printf("--------------------------\n");
    }
}
//------------------------------------------------------------------------------------------------------
int extrai_abaixo_do_topo (t_pilha *p){
    if (tamanho(p) < 2) {
        return -1;
    }
    else{
        int aux, o_que_sai;
        desempilha (p, &aux);
        desempilha (p, &o_que_sai);
        empilha (p, aux);
        return o_que_sai;
    }
}
//--------------------------------------------------------------------------------------------------
int valor_topo (t_pilha *p){
    //considerando que quem fez a chamada testou pilha_vazia
    return p -> dados[p -> topo -2];
}
//--------------------------------------------------------------------------------------------
void amassa_topo (t_pilha *p, int i){  
    if(!esta_vazia(p) && valor_topo(p) < i){
        int aux;
        desempilha(p, &aux);
    }
    empilha(p, i);
}

    /*Teste de segurança sempre vem primeiro no OU (|| e no é &&);
    trocamos o ou(||) usando a lei de DeMorgan, pois se mantivessemos o OU, só iria passar para o else se os dois
    fossem falsos, o que acaba consumindo mais memoria ficar nessa verificação, tiramos um else, deixamos o código limpo
    e funcional
    */
//---------------------------------------------------------------------------------------------------------
void amassa_pilha (t_pilha *p, int i){
    while (!esta_vazia(p) && valor_topo(p) < i){
        int aux;
        desempilha(p, &aux);
    }
    empilha(p, i);
}