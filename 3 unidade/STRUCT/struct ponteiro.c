#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 4
struct campeonato{
	char time[30];
	int pontuacao;
};
void ler(struct campeonato x[t]);
void ordenar(struct campeonato x[t]);
void imprimir(struct campeonato x[t]);
void menu(struct campeonato x[t]);
void buscar(struct campeonato x[t]);
int y=0;
int main(){
setlocale(LC_ALL, "portuguese");
	struct campeonato x[t];
	menu(x);	
	system("pause");
	return 0;
}
void menu(struct campeonato x[t]){
	int op;
	char opcao;
	do{		
		printf("---------------------------------=;=-------------------------------\n");		
		printf("\t\t\t\tMENU\n");
		printf("0. Sair.\n");
		printf("1. Inscrever times.\n");
		printf("2. Mostrar tabela de acordo com a pontuação maior.\n");
		printf("3. Buscar time por nome.\n");
		printf("---------------------------------=;=-------------------------------\n\n");		
		printf("Digite a sua opção: ");
		scanf("%d", &op);
		if(op==0){
			break;
		}
		system("cls");
		switch(op){
			case 1: do{
					printf("----------------------=;=----------------------\n");		
					ler(x);
					printf("----------------------=;=----------------------\n");		
					
					printf("Digite 's' para inscrever outro time e 'n' para voltar ao menu.\n");
					printf("s/n?: ");
					fflush(stdin);
					scanf("%c", &opcao);
					fflush(stdin);
					if(opcao=='n'){
						break;
					}
					
					}while(opcao!='n');
			system("cls");
			break;
			case 2: do{
					printf("----------------------=;=----------------------\n");							
					ordenar(x);
					imprimir(x);			
					printf("----------------------=;=----------------------\n");		
					printf("Voltar ao menu?\n");
					printf("s/n?: ");
					fflush(stdin);
					scanf("%c", &opcao);
					fflush(stdin);
					
					if(opcao=='s'){
						break;
					}
					system("cls");
					}while(opcao!='s');
					system("cls");
			break;
			case 3: do{
					printf("----------------------=;=----------------------\n");							
					buscar(x);
					printf("----------------------=;=----------------------\n");		
					printf("Digite 's' para buscar outro time e 'n' para voltar ao menu.\n");
					printf("s/n?: ");
					fflush(stdin);
					scanf("%c", &opcao);
					fflush(stdin);
					
					if(opcao=='n'){
						break;
					}
					system("cls");
					}while(opcao!='n');
					system("cls");
			
			break;
			default: break;
		}
	}while(op!=0);
}
void ler(struct campeonato x[t]){
	printf("Nome do time: ");
	fflush(stdin);
	gets(x[y].);
	fflush(stdin);
	printf("Pontuação do time: ");
	scanf("%d", &x[y].pontuacao);	
	y++;
}
void ordenar(struct campeonato x[t]){
	int i, j;
	struct campeonato aux;
	for(i=0; i<y; i++){
		for(j=0; j<y; j++){
			if(x[i].pontuacao>x[j].pontuacao){
				strcpy(aux.time, x[i].time);
				aux.pontuacao = x[i].pontuacao;
				
				strcpy(x[i].time, x[j].time);
				x[i].pontuacao = x[j].pontuacao;
				
				strcpy(x[j].time, aux.time);
				x[j].pontuacao = aux.pontuacao;
			}
		}
	}
}
void imprimir(struct campeonato x[t]){
	int i;
	struct campeonato *ponteiro;
	if(y==1){		
		printf("Nome do time: %s\n", x[0].time);
		printf("Pontuação: %d\n", x[0].pontuacao);			
	}else if(y>=1){
		for(i=0; i<y; i++){
			ponteiro = &x[i];
			printf("%d° Lugar\n", i+1);
			printf("Nome do time: %s\n", ponteiro->time);
			printf("Pontuação: %d\n\n", ponteiro->pontuacao);			
		}	
	}	
}
void buscar(struct campeonato x[t]){
	char nome[10];
	int i;
	printf("Digite o nome do time que deseja: ");
	fflush(stdin);
	gets(nome);
	fflush(stdin);	
	
	for(i=0; i<y; i++){		
		if(strcmp(nome, x[i].time)==0){
			printf("\nTime encontrado!\n");
			printf("Nome: %s", x[i].time);
			printf("\nPontuação: %d\n", x[i].pontuacao);
			break;			
		}
	}
}

