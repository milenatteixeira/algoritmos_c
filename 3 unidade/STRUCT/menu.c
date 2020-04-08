#include <stdio.h>
#include <locale.h>
#include <string.h>
#define t 3

struct candidato{
	char nome[30];
	int numero;
	int qnt_votos;
};

void menu(struct candidato c[t]);
void cadastrar(struct candidato c[t]);
void ordenar(struct candidato c[t]);
void imprimir(struct candidato c[t]);

int main(){
	setlocale(LC_ALL,"Portuguese");
	struct candidato c[t];
	menu(c);	
	system("pause");
	return 0;
}

void menu(struct candidato c[t]){
	int op;

	do{
		printf("\n1.Cadastrar");
		printf("\n2.Ordenar");
		printf("\n3.Imprimir");
		printf("\n4.Sair");
		printf("\nDigite a opção desejada: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				cadastrar(c);
				break;
			case 2:
				ordenar(c);
				break;
			case 3:
				imprimir(c);
				break;
		break;
		}
	
	}while(op!=4);
	
	
}

void cadastrar(struct candidato c[t]){
		int i=0;		
		do{
		printf("\nDigite o nome do candidato: ");
		fflush(stdin);
		gets(c[i].nome);
		fflush(stdin);
		printf("\nDigite o número: ");
		scanf("%d",&c[i].numero);
		printf("\nDigite o número de votos: ");
		scanf("%d",&c[i].qnt_votos);
		i++;
		}while(i!=t);		
}

void ordenar(struct candidato c[t]){
	int i, j;
	struct candidato aux;
	for(i=0;i<t;i++){
					for(j=i+1;j<t;j++){
						if(c[i].qnt_votos<c[j].qnt_votos){
							aux.qnt_votos = c[i].qnt_votos;
							strcpy(aux.nome,c[i].nome);
							aux.numero = c[i].numero;
							
							c[i].qnt_votos = c[j].qnt_votos;
							strcpy(c[i].nome, c[j].nome);
							c[i].numero = c[j].numero;
							
							c[j].qnt_votos = aux.qnt_votos;
							strcpy(c[j].nome,aux.nome);
							c[j].numero = aux.numero;
						}
					}
				}
}

void imprimir(struct candidato c[t]){
	int i;
	for(i=0;i<t;i++){
					printf("\nO nome do candidato: %s", c[i].nome);
					printf("\nQuantidade de votos: %d", c[i].qnt_votos);
					printf("\nO número do candidato: %d", c[i].numero);
	}
}

