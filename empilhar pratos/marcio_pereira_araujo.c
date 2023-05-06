#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

# define tamanho 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct pilha_pratos{

	char cor[10];

}pratos;

int topo_pilhaprincipal=0;
int topo_pilhasecundaria=0;
pratos pilha_principal[tamanho];
pratos pilha_secundaria[tamanho];

void preencher();
void esvaziar();
void exibir_pilha_principal();
void exibir_pilha_secundaria();




int main() {

	setlocale(LC_ALL, "Portuguese");

	int escolha;
	int check = 1;

	do
	{
        system("cls");
		printf("MENU EMPILHA\n\n\n");
		printf("0 - sair\n1 - preencher a pilha principal\n2 - exibir pilha principal\n3 - trocar pratos de pilhar\n4 - exibir pilha secundária\n");

        scanf("%d",&escolha);
        fflush(stdin);

		switch (escolha)
		{

		case 0: check = 0; break;
		case 1: preencher(); break;
		case 2: exibir_pilha_principal(); break;
		case 3: esvaziar(); break;
		case 4: exibir_pilha_secundaria(); break;
		default : printf("dado inválido digite novamente"); break;

		}

	} while (check == 1);

	return 0;
}


void preencher (){
    system("cls");
	int i;
	if(topo_pilhaprincipal==tamanho){
        printf("A pilha já está cheia, não é possivel empilhar");
	}else{

        for(i=0;i<tamanho;i++){

            switch (i)
            {
            case 0:
                strcpy(pilha_principal[i].cor,"vermelho");
                topo_pilhaprincipal=i+1;
                break;
            case 1:
                strcpy(pilha_principal[i].cor,"verde");
                topo_pilhaprincipal=i+1;
                break;
            case 2:
                strcpy(pilha_principal[i].cor,"azul");
                topo_pilhaprincipal=i+1;
                break;
            case 3:
                strcpy(pilha_principal[i].cor,"branco");
                topo_pilhaprincipal=i+1;
                break;
            case 4:
                strcpy(pilha_principal[i].cor,"laranja");
                topo_pilhaprincipal=i+1;
                break;

            }
        }



	system("cls");
	printf("pilha preenchida com sucesso\n\n");
	//printf("topo da pilha principal: %d\ntopo da pilha secundária: %d\n",topo_pilhaprincipal,topo_pilhasecundaria);
	getchar();
	}


}


void esvaziar(){
    system("cls");
	int i;

	if(topo_pilhaprincipal==0){
		printf("Não é possível mover pratos, pilha principal está vazia!!\n\n");
		getchar();
	}else{
	    //printf("topo da pilha principal: %d\ntopo da pilha secundária: %d\n",topo_pilhaprincipal,topo_pilhasecundaria);
		for(i=0;i<tamanho;i++){
			strcpy(pilha_secundaria[i].cor , pilha_principal[topo_pilhaprincipal-1].cor);
			strcpy(pilha_principal[topo_pilhaprincipal].cor,"nenhuma");
			topo_pilhaprincipal-=1;
			topo_pilhasecundaria=i+1;
		}

		//printf("topo da pilha principal: %d\ntopo da pilha secundária: %d\n",topo_pilhaprincipal,topo_pilhasecundaria);
		printf("a troca foi feita com sucesso!\n\n");
		getchar();
	}
    puts("");

}


void exibir_pilha_principal(){
    system("cls");
    int i;
    printf("PILHA PRINCIPAL\n\n\n");
    if(topo_pilhaprincipal==0){

        printf("A pilha principal está vazia!!\n");
    }else{
        for(i=tamanho;i>=0;i--){

            printf("%s\n",&pilha_principal[i].cor);

        }
    }
    getchar();
    puts("");

}


void exibir_pilha_secundaria(){
    system("cls");
    int i;
    printf("PILHA SECUNDÁRIA\n\n\n");

    if(topo_pilhasecundaria==0){

        printf("pilha secundária está vazia!!\n");

    }else{

        for(i=tamanho;i>=0;i--){

            printf("%s\n",&pilha_secundaria[i].cor);

        }
    }
    getchar();
    puts("");




}



