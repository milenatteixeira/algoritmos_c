#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 100

//declaração da estrutura
struct pessoa{
	char nome[t];
	int codigo;
	float calorias;
	char dia[t];
};

//declaração da variavel global
int y=0;

//declaração das funções
void menu(struct pessoa x[4]);
void cadastrar(struct pessoa x[4]);
void buscar(struct pessoa x[4]);
void ordenar1(struct pessoa x[4]);
void ordenar2(struct pessoa x[4]);
void imprimir(struct pessoa x[4]);

//função principal
int main(){
setlocale(LC_ALL, "portuguese");
	struct pessoa x[4];
	menu(x);
	system("pause");
	return 0;
}

//implementação das funções
void cadastrar(struct pessoa x[4]){
	printf("Nome da receita: ");
	fflush(stdin);
	gets(x[y].nome);
	fflush(stdin);
	printf("Código da receita: ");
	scanf("%f", &x[y].codigo);
	printf("Calorias: ");
	scanf("%d", &x[y].calorias);
	printf("Dia da semana: ");
	fflush(stdin);
	gets(x[y].dia);	
	fflush(stdin);
	y++;
}

void buscar(struct pessoa x[4]){
	char nome[100];
	int i;
	printf("Digite o nome da receita que deseja: ");
	fflush(stdin);
	gets(nome);
	fflush(stdin);
	for(i=0; i<y; i++){
		if(strcmp(x[i].nome, nome)==0){
		printf("Receita encontrada! \n");
		printf("Nome da receita: %s\n", x[i].nome);		
		printf("Código da receita: %d\n", x[i].codigo);		
		printf("Calorias: %f\n", x[i].calorias);		
		printf("Dia da semana: %s\n", x[i].dia);
		}else{
		printf("Receita não encontrada!\n");
		}	
	}
	
}

void ordenar1(struct pessoa x[4]){
	int i, j;
	struct pessoa aux;
	for(i=0; i<y; i++){
		for(j=i+1; j<y; j++){
			if(x[i].codigo<x[j].codigo){
				aux.calorias = x[i].calorias;
				aux.codigo = x[i].codigo;
				strcpy(aux.dia, x[i].dia);
				strcpy(aux.nome, x[i].nome);
				
				x[i].calorias = x[j].calorias;
				x[i].codigo = x[j].codigo;
				strcpy(x[i].nome, x[j].dia);
				strcpy(x[i].nome, x[j].nome);
				
				x[j].calorias = aux.calorias;
				x[j].codigo = aux.codigo;
				strcpy(x[j].dia, aux.dia);
				strcpy(x[j].nome, aux.nome);								
			}
		}		
	}
}

void ordenar2(struct pessoa x[4]){
	int i, j;
	struct pessoa aux;
	for(i=0; i<y; i++){
		for(j=i+1; j<y; j++){
			if(x[i].calorias<x[j].calorias){
				aux.calorias = x[i].calorias;
				aux.codigo = x[i].codigo;
				strcpy(aux.dia, x[i].dia);
				strcpy(aux.nome, x[i].nome);
				
				x[i].calorias = x[j].calorias;
				x[i].codigo = x[j].codigo;
				strcpy(x[i].nome, x[j].dia);
				strcpy(x[i].nome, x[j].nome);
				
				x[j].calorias = aux.calorias;
				x[j].codigo = aux.codigo;
				strcpy(x[j].dia, aux.dia);
				strcpy(x[j].nome, aux.nome);								
			}
		}		
	}
}

void menu(struct pessoa x[4]){
	int op;	
	
	do{
	printf("0. Sair.\n");
	printf("1. Cadastrar receita.\n");
	printf("2. Buscar receita (por nome).\n");
	printf("3. Ordenar as receitas por ordem crescente de códigos.\n");
	printf("4. Ordenar as receitas por ordem decrescente de calorias.\n");
	printf("5. Imprimir.\n");
	printf("Digite a sua opção: ");
	scanf("%d", &op);
	
	switch(op){
		case 1: system("cls");
				cadastrar(x);
		break;
		case 2: buscar(x);
		break;
		case 3: ordenar1(x);
		break;
		case 4: ordenar2(x);
		break;
		case 5: imprimir(x);
		default: break;
	}
	
	}while(op!=0);
}
void imprimir(struct pessoa x[4]){
	int i;
	for(i=0; i<y; i++){		
		printf("Código da receita: %d\n", x[i].codigo);	
		printf("Nome da receita: %s\n", x[i].nome);					
		printf("Calorias: %.2f\n", x[i].calorias);		
		printf("Dia da semana: %s\n", x[i].dia);
	}
}

