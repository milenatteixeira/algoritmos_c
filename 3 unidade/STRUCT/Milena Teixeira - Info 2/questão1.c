#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define tam 100
#define t 4
struct ifba{
	int cod;
	char nome[tam];
	char dia[tam];
	int car;
	int cal;
	int gor;
};
int y=0;
void menu(struct ifba x[t]);
void cadastrar(struct ifba x[t]);
void buscar(struct ifba x[t]);
void codigo(struct ifba x[t]);
void carboidratos(struct ifba x[t]);
void gordura(struct ifba x[t]);
void calorias(struct ifba x[t]);
void imprimir(struct ifba x[t]);
int main(){
setlocale(LC_ALL, "portuguese");
	struct ifba x[t];
	menu(x);
	system("pause");
	return 0;
}
void cadastrar(struct ifba x[t]){
	printf("\nDigite o nome da receita: ");
	fflush(stdin);
	gets(x[y].nome);
	fflush(stdin);
	printf("Digite o código da receita: ");
	scanf("%d", &x[y].cod);
	printf("Digite o dia da receita: ");
	fflush(stdin);
	gets(x[y].dia);
	fflush(stdin);
	printf("Digite o número de carboidratos: ");
	scanf("%d", &x[y].car);
	printf("Digite o número de calorias: ");
	scanf("%d", &x[y].cal);
	printf("Digite o número de gorduras: ");
	scanf("%d", &x[y].gor);
	y++;
}
void buscar(struct ifba x[t]){
	char nom[tam];
	int i;
	printf("\nDigite o nome da receita desejada: ");
	fflush(stdin);
	gets(nom);
	fflush(stdin);
			
	for(i=0; i<y; i++){
		if(strcmp(nom, x[i].nome)==0){
			printf("\nReceita encontrada!\n");
			printf("Nome: %s\n", x[i].nome);
			printf("Código: %d\n", x[i].cod);
			printf("Dia: %s\n", x[i].dia);
			printf("Calorias: %d\n", x[i].cal);
			printf("Carboidratos: %d\n", x[i].car);
			printf("Gorduras: %d\n", x[i].gor);
			break;			
		}
	}
	
}
void codigo(struct ifba x[t]){
	int i, j;
	struct ifba aux;		
	for(i=0; i<y; i++){
		for(j=i+1; j<y; j++){
			if(x[i].cod<x[j].cod){
				aux.cal = x[i].cal;
				aux.car = x[i].car;
				aux.gor = x[i].gor;
				aux.cod = x[i].cod;
				strcpy(aux.dia, x[i].dia);
				strcpy(aux.nome, x[i].nome);
				
				x[i].cal = x[j].cal;
				x[i].cod = x[j].cod;
				x[i].car = x[j].car;
				x[i].gor = x[j].gor;
				strcpy(x[i].nome, x[j].dia);
				strcpy(x[i].nome, x[j].nome);
				
				x[j].cal = aux.cal;
				x[j].cod = aux.cod;
				x[j].car = aux.car;
				x[j].gor = aux.gor;
				strcpy(x[j].dia, aux.dia);
				strcpy(x[j].nome, aux.nome);								
			}
		}		
	}
}
void carboidratos(struct ifba x[t]){
	int i, j;
	struct ifba aux;		
	for(i=0; i<y; i++){
		for(j=i+1; j<y; j++){
			if(x[i].car>x[j].car){
				aux.cal = x[i].cal;
				aux.car = x[i].car;
				aux.gor = x[i].gor;
				aux.cod = x[i].cod;
				strcpy(aux.dia, x[i].dia);
				strcpy(aux.nome, x[i].nome);
				
				x[i].cal = x[j].cal;
				x[i].cod = x[j].cod;
				x[i].car = x[j].car;
				x[i].gor = x[j].gor;
				strcpy(x[i].nome, x[j].dia);
				strcpy(x[i].nome, x[j].nome);
				
				x[j].cal = aux.cal;
				x[j].cod = aux.cod;
				x[j].car = aux.car;
				x[j].gor = aux.gor;
				strcpy(x[j].dia, aux.dia);
				strcpy(x[j].nome, aux.nome);								
			}
		}		
	}
}
void gordura(struct ifba x[t]){
	int i, j;
	struct ifba aux;		
	for(i=0; i<y; i++){
		for(j=i+1; j<y; j++){
			if(x[i].gor>x[j].gor){
				aux.cal = x[i].cal;
				aux.car = x[i].car;
				aux.gor = x[i].gor;
				aux.cod = x[i].cod;
				strcpy(aux.dia, x[i].dia);
				strcpy(aux.nome, x[i].nome);
				
				x[i].cal = x[j].cal;
				x[i].cod = x[j].cod;
				x[i].car = x[j].car;
				x[i].gor = x[j].gor;
				strcpy(x[i].nome, x[j].dia);
				strcpy(x[i].nome, x[j].nome);
				
				x[j].cal = aux.cal;
				x[j].cod = aux.cod;
				x[j].car = aux.car;
				x[j].gor = aux.gor;
				strcpy(x[j].dia, aux.dia);
				strcpy(x[j].nome, aux.nome);								
			}
		}		
	}
}
void calorias(struct ifba x[t]){
	int i, j;
	struct ifba aux;		
	for(i=0; i<y; i++){
		for(j=i+1; j<y; j++){
			if(x[i].cal>x[j].cal){
				aux.cal = x[i].cal;
				aux.car = x[i].car;
				aux.gor = x[i].gor;
				aux.cod = x[i].cod;
				strcpy(aux.dia, x[i].dia);
				strcpy(aux.nome, x[i].nome);
				
				x[i].cal = x[j].cal;
				x[i].cod = x[j].cod;
				x[i].car = x[j].car;
				x[i].gor = x[j].gor;
				strcpy(x[i].nome, x[j].dia);
				strcpy(x[i].nome, x[j].nome);
				
				x[j].cal = aux.cal;
				x[j].cod = aux.cod;
				x[j].car = aux.car;
				x[j].gor = aux.gor;
				strcpy(x[j].dia, aux.dia);
				strcpy(x[j].nome, aux.nome);								
			}
		}		
	}
}
void imprimir(struct ifba x[t]){
	int i;
	struct ifba *ponteiro;
		
	for(i=0; i<y; i++){		
		ponteiro = &x[i];
		printf("\n\nCódigo da receita: %d\n", ponteiro->cod);			
		printf("Nome da receita: %s\n", ponteiro->nome);							
		printf("Calorias: %d\n", ponteiro->cal);		
		printf("Carboidratos: %d\n", ponteiro->car);		
		printf("Gorduras: %d\n", ponteiro->gor);
		printf("Dia da semana: %s\n\n", ponteiro->dia);
	}
}
void menu(struct ifba x[t]){
	int opcao;
	char op;
	
	do{
		printf("-------------------------;=;-----------------------\n");
		printf("\t\t\tMENU\n");
		printf("-------------------------;=;-----------------------\n");
		printf("0. Sair.\n");
		printf("1. Cadastrar receitas.\n");
		printf("2. Buscar receita pelo nome.\n");
		printf("3. Receitas em ordem descrecente de código.\n");
		printf("4. Receitas em ordem crescente de carboidratos.\n");
		printf("5. Receitas em ordem crescente de gordura.\n");
		printf("6. Receitas em ordem crescente de calorias.\n");
		printf("7. Imprimir.\n");		
		printf("\nDigite a opção desejada: ");
		scanf("%d", &opcao);
		if(opcao==0){			
		system("cls");
		printf("---------------------------------------------------;=;---------------------------------------------------\n");
		printf("\tAtividade avaliativa referente a III Unidade de Algoritmos do II Ano de Informática.\n");
		printf("\n\tDocente: Tales");
		printf("\n\tDiscente: Milena Teixeira.\n");
		printf("---------------------------------------------------;=;---------------------------------------------------\n");
		break;
		}
		switch(opcao){
			case 1: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tCADASTRO DE RECEITAS\n");
					printf("-------------------------;=;-----------------------\n");	
					do{							
					cadastrar(x);
					printf("Deseja cadastrar uma nova receita? S/N: ");
					fflush(stdin);
					scanf("%c", &op);
					fflush(stdin);					
					}while(op!='n');
					system("cls");
			break;
			case 2: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tBUSCA DE RECEITAS\n");
					printf("-------------------------;=;-----------------------\n");	
					do{							
					buscar(x);
					printf("Deseja buscar uma nova receita? S/N: ");
					fflush(stdin);
					scanf("%c", &op);
					fflush(stdin);					
					}while(op!='n');
					system("cls");					
			break;
			case 3: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tORDENAÇÃO POR CÓDIGO DECRESCENTE\n");
					printf("-------------------------;=;-----------------------\n");	
					codigo(x);
					printf("\n\t\tOrdenação feita com sucesso!\n\n");										
			break;
			case 4: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tORDENAÇÃO POR CARBOIDRATOS CRESCENTE\n");
					printf("-------------------------;=;-----------------------\n");	
					carboidratos(x);
					printf("\n\t\tOrdenação feita com sucesso!\n\n");		
			break;
			case 5: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tORDENAÇÃO POR GORDURA CRESCENTE\n");
					printf("-------------------------;=;-----------------------\n");	
					gordura(x);
					printf("\n\t\tOrdenação feita com sucesso!\n\n");							
			break;
			case 6: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tORDENAÇÃO POR CALORIAS CRESCENTE\n");
					printf("-------------------------;=;-----------------------\n");	
					calorias(x);
					printf("\n\t\tOrdenação feita com sucesso!\n\n");					
			break;
			case 7: system("cls");
					printf("-------------------------;=;-----------------------\n");
					printf("\t\tLISTA DE RECEITAS\n");
					printf("-------------------------;=;-----------------------\n");	
					do{							
					imprimir(x);
					printf("Voltar ao menu? s/n: ");
					fflush(stdin);
					scanf("%c", &op);
					fflush(stdin);					
					}while(op!='s');
					system("cls");
			break;
		}
		
	}while(opcao!=0);
}
