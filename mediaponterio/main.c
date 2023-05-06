#include <stdio.h>
#include <stdlib.h>

//calcular a média de 4 notas

float *alocarF(float *numero);
void desalocar(float *numero);
float somar();

int main()
{
    float *total;
    float *media;

    media=alocarF(media);
    total=alocarF(total);

    *total=somar();
    printf("\n%f\n",*total);
    *media = *total/4;
    printf("\nsua média é %.2f",*media);

    desalocar(media);
    desalocar(total);
    return 0;
}

float *alocarF(float *numero){
    numero=(float*)malloc(sizeof(float));
    return numero;
}

void desalocar (float *numero){
        free(numero);
        numero=NULL;
}

float somar(){
    int i;
    float acumulo=0, notas;
    for(i=0;i<4;i++){
        printf("\ndigite a nota %d:",i+1);
        scanf("%f",&notas);
        acumulo+=notas;
    }
    return (acumulo);
}





