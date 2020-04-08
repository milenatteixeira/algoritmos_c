/*Crie um programa que auxilie o HEMOBA Irecê. Deve-se criar um struct para o doador
possuindo 1. nome; 2. idade; 3. tipo sangüinio; 4. peso.
Faça uma função que indique, baseado no doador, quais podem ser os receptores.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3

struct hemoba{
	char nome[30];
	int idade;
	char tipo[10];
	float peso;
};

void menu(struct hemoba c[t]);
void cadastrar(struct hemoba c[t]);
void ordenar(struct hemoba c[t]);
void imprimir(struct hemoba c[t]);
void doacao(struct hemoba c[t]);
int i=0;

int main(){
setlocale(LC_ALL, "portuguese");
	struct hemoba c[t];	
	menu(c);	
	system("pause");
	return 0;
}

void cadastrar(struct hemoba c[t]){		
	printf("Dados:\n");
	printf("Nome: ");
	fflush(stdin);
	gets(c[i].nome);
	fflush(stdin);
	printf("Idade: ");
	scanf("%d", &c[i].idade);
	printf("Peso: ");
	scanf("%f", &c[i].peso);
	printf("Tipo Sanguineo: ");
	fflush(stdin);
	gets(c[i].tipo);
	fflush(stdin);
	i++;	
}
void imprimir(struct hemoba c[t]){
	int j;
	for(j=0;j<i;j++){
	printf("Dados:\n");
	printf("Nome:%s", c[i].nome);
	printf("\nIdade:%d", c[i].idade);
	printf("\nPeso:%.3f", c[i].peso);
	printf("\nTipo Sanguineo:%s", c[i].tipo);
	}
}
void menu(struct hemoba c[t]){
	int opcao;
	do{
	printf("0. Sair.\n");
	printf("1. Cadastrar.\n");
	printf("2. Imprimir.\n");		
	printf("3. Ordenar.\n");
	printf("Digite a opção: ");
	scanf("%d", &opcao);
	if(opcao==0){
		break;
	}
	switch(opcao){
		case 1: cadastrar(c);
				break;
				
		case 2: imprimir(c);
				break;		
				
		case 3: imprimir(c);
				break;
				
		default: break;
	}
	}while(opcao!=0);
}
void ordenar(struct hemoba c[t]){
	int y, j;
	struct hemoba aux;
	for(y=0; y<=i; y++){
		for(j=y+1; j<=i; j++){
			if(c[y].idade<c[j].idade){
				strcpy(aux.nome, c[y].nome);
				strcpy(aux.tipo, c[y].tipo);
				aux.idade = c[y].idade;
				aux.peso = c[y].peso;
				
				c[y].idade = c[j].idade; 
				c[y].peso = c[j].peso;
				strcpy(c[y].nome, c[j].nome);
				strcpy(c[y].tipo, c[j].tipo);
				
				c[j].peso = aux.peso;
				c[j].idade = aux.idade;
				strcpy(c[j].nome, aux.nome);
				strcpy(c[j].tipo, aux.tipo);
			}
		}
	}
}
void doacao(struct hemoba c[t]){
	
}
