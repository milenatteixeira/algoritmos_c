#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 30

struct pessoa x[4]{
	char nome[t];
	int codigo;
	int calorias;
	char dia[t];
};
void imprimir(struct pessoa x[4]);
void ler(struct pessoa x[4]);
void ordenar(struct pessoa x[4]);
void buscar(struct pessoa x[4]);
int main(){
setlocale(LC_ALL, "portuguese");
	int op;
	struct pessoa x[4]; 
	
	do{
		printf("0. Sair.\n");
		printf("1. Cadastrar receita.\n");
		printf("2. Buscar receita (por nome).\n");
		printf("3. Ordenar as receitas por ordem decrescente de códigos.\n");
		printf("4. Ordenar as receitas por ordem crescente de calorias.\n");
		printf("5. Imprimir.\n");
		
		switch(op){
			case 1: ler(pessoa);
					break;					
			case 2: 
			case 3: 
			case 4: 
			case 5: imprimir(pessoa);
					break;
		}
	}while(op!=0);
	
	system("pause");
	return 0;
}
void ler(struct pessoa x[T]){
	int y=0; 
	printf("\n\tCADASTRO DE RECEIRAS\n\n");		
			printf("Nome da receita: ");
			fflush(stdin);
			gets(x[y].nome);
			fflush(stdin);
			printf("Código da receita: ");
			scanf("%d", &x[y].codigo);
			printf("Calorias: ");			
			scanf("%f", &x[y].calorias)
			printf("Dia que é servida: ");
			flush(stdin);
			gets(x[y].dia);
			fflush(stdin);			
			y++;
	}
void imprimir(struct pessoa x[4]){
	int i;
	
	for(i=0; i<4; i++){
		printf("Nome da receita: %s\n", x[i].nome);
		printf("Código da receita: %d\n", x[i].codigo);
		printf("Calorias: %.2f\n", x[i].calorias);
		printf("Dia que é servida: %s\n", x[i].dia);		
		printf("\n");
	}
}
void ordenar(struct pessoa x[4]){
	int i, j, aux, aux3;
	char  aux2, aux4;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if( if(strcmp(x[j].codigo, x[j+1].codigo)>0){
				aux = x[i].codigo;
				x[i].codigo = x[j].codigo;
				x[j].codigo = aux;
				aux2 = x[i].nome;
				x[i].nome = x[j].nome;
				x[j].nome = aux2;
				aux3 = x[i].calorias;
				x[i].calorias = x[j].calorias;
				x[j].calorias = aux3;
				aux4 = x[i].dia;
				x[i].dia = x[j].dia;
				x[j].dia = aux4;
			}
		}
	}
}
void buscar(struct pessoa x[4]){
	
}
