#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define tam 100
#define t 3
struct lista{
	int num;
	struct lista* prox;
};
typedef struct lista Lista;
Lista* inicio(void){
	return NULL;
}

Lista* insere(Lista* l, int x){
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->num = x;
	novo->prox = NULL;
	Lista* bef = NULL;
	Lista* p = l;
	 while(p!=NULL && p->num<x){
	 	bef = p;
	 	p = p->prox;
	 }
	 if(bef == NULL){
	 	novo->prox = l;
	 	l = novo;
	 }else{
	 	novo->prox = bef->prox;
	 	bef->prox = novo;
	 }
	 return l;	
}
int vazio(Lista* l){
	if(vazio(l)) return;
}
void imprimir_recursivo(Lista* l){
	printf("%d\n", l->num);
	imprimir_recursivo(l->prox);
}
Lista* exclusao(Lista*l, int x){
	Lista* bef = NULL;
	Lista* p = l;
	
	while(p!=NULL && p->num!=x){
		bef = p;
	 	p = p->prox;
	 }
	 if(p==NULL)
	  return l;
	 if(bef==NULL){
	 	l = p->prox;
	 }else{
	 	bef->prox = p->prox;
	 }
	 free(p);
	 return l;
}
int main (){
	setlocale(LC_ALL, "portuguese");
	Lista* l;
	int y, i, qtd[t], exc;
	char op;
	l = inicio();
	for(i=0; i<t; i++){
		printf("\tDigite o N°%d: ", i+1);
		scanf("%d", &qtd[i]);
		l = insere(l, qtd[i]);
	}
	system("cls");
	do{
		printf("\t\tMENU\n");
		printf("0. Sair.\n");
		printf("1. Mostrar a lista encadeada.\n");
		printf("2. Excluir um número da lista.\n");
		printf("\tDigite a sua opção: ");
		scanf("%d", &y);
		
		switch(y){
			case 1: do{
					imprimir_recursivo(l);
					printf("Voltar ao menu? s/n: ");
					fflush(stdin);
					scanf("%s", &op);									
					fflush(stdin);
					}while(op!='s');
					system("cls");
					break;
					
			case 2: do{
					printf("\n\tDigite o número que deseja excluir: ");
					scanf("%d", &exc);
					l = exclusao(l, exc);					
					printf("Voltar ao menu? s/n: ");
					fflush(stdin);
					scanf("%s", &op);									
					fflush(stdin);
					}while(op!='s');
					system("cls");
					break;
					
			default: break;
		}
	}while(y!=0);
	
	system("pause");
	return 0;
}

