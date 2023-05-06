#include <stdio.h>
#include <stdlib.h>
void antecessor_sucessor(int *num);
void desalocar(int*numero);
int main()
{
    int *numero;
    numero = (int*)malloc(sizeof(int));
    printf("digite\n");
    scanf("%d",numero);

    antecessor_sucessor(numero);
    desalocar(numero);



    return 0;
}

void antecessor_sucessor(int *num){

    printf("antecessor: %d\n",*num-1);
    printf("sucessor: %d\n",*num+1);
}

void desalocar(int*numero){

    free(numero);
    *numero=NULL;

}

