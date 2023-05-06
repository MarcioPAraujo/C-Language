#include <stdio.h>
#include <stdlib.h>
//RA: 21049359
// Márcio Pereira Araújo;
typedef struct No
{
    int numero;
    struct No *pai;
    struct No *esquerda;
    struct No *direita;
}estrutura;

estrutura *alocar(estrutura*novoNo);
estrutura inicializar_ponteiro();
void inserirNO(estrutura *raiz,estrutura *no);
void percorrer_arvore(estrutura *raiz);

int main()
{
    int valor=2;

    estrutura *raiz;
    raiz = alocar(raiz);
    *raiz = inicializar_ponteiro();
    raiz->numero=valor;
    //printf("%d",raiz->numero);

    valor=1;
    estrutura *novo_no_1;
    novo_no_1 = alocar(novo_no_1);
    *novo_no_1 = inicializar_ponteiro();
    novo_no_1->numero=valor;

    inserirNO(raiz,novo_no_1);

    percorrer_arvore(raiz);
    puts("");

    valor=0;

    estrutura *novo_no_0;
    novo_no_0 = alocar(novo_no_0);
    *novo_no_0 = inicializar_ponteiro();
    novo_no_0->numero = valor;

    inserirNO(raiz, novo_no_0);

    percorrer_arvore(raiz);
    puts("");

    valor=4;
    estrutura *novo_no_4;
    novo_no_4 = alocar(novo_no_4);
    *novo_no_4 = inicializar_ponteiro();
    novo_no_4->numero = valor;

    inserirNO(raiz, novo_no_4);

    percorrer_arvore(raiz);
    puts("");

    valor = 9;
    estrutura *novo_no_9;
    novo_no_9 = alocar(novo_no_9);
    *novo_no_9 = inicializar_ponteiro();
    novo_no_9->numero = valor;

    inserirNO(raiz, novo_no_9);

    percorrer_arvore(raiz);
    puts("");

    return 0;
}

estrutura *alocar(estrutura*novoNo){

    return novoNo=(estrutura*)malloc(sizeof(estrutura));
}

estrutura inicializar_ponteiro(){
    estrutura novoNo;
    novoNo.pai=NULL;
    novoNo.esquerda=NULL;
    novoNo.direita=NULL;
    novoNo.numero=0;

    return novoNo;
}

void inserirNO(estrutura *raiz, estrutura *no){
    printf("ok 1 ");
    if (no->numero >= raiz->numero){
        printf("ok 2 ");
        if(raiz==NULL){
            inserirNO(raiz->direita,no);
        }
        raiz->direita = no;
        no->pai = raiz;
    }
    else{
        printf("ok 3 ");
        if(raiz==NULL){
            inserirNO(raiz->esquerda, no);
        }
        raiz->esquerda = no;
        no->pai = raiz;
    }

}

void percorrer_arvore(estrutura *raiz){

    if(raiz){
        printf("%d ",raiz->numero);
        percorrer_arvore(raiz->esquerda);
        percorrer_arvore(raiz->direita);
    }
}

