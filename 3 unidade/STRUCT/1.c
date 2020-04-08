#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#define t 30
#define T 4

struct pessoa{
	char nome[t];
	int cpf;
	char instituicao[t];
	char email[t];
	char atividade[t];	
};

void cadastro(struct pessoa x[T]);
void imprimir(struct pessoa x[T]);
void menu(struct pessoa x[T]);
void qtdAtividade(struct pessoa x[T]);
void qtdAtividade2(struct pessoa x[T]);
void bubblesort(struct pessoa x[T]);
int qtdCadastro(struct pessoa x[T]);
int y=0;
int cont=0;
int cont2=0;

int main(){
setlocale(LC_ALL,"portuguese");
	struct pessoa x[T]; 	
	menu(x);	
system("pause");
return 0;
}
void menu(struct pessoa x[T]){
	int opcao, y;
	
	do{	printf("\t\tCONTROLE DE CADASTROS\n");
		printf("0. Sair.\n");
		printf("1. Cadastrar.\n");
		printf("2. Quantidade de pessoas cadastradas.\n");
		printf("3. Lista de cadastros (em ordem alfabética).\n");
		printf("4. Quantidade de pessoas em cada atividade.\n");		
		printf("Digite a opção: ");
		scanf("%d", &opcao);
		
		if(opcao==0){
			break;
		}
		
		switch(opcao){
			case 1: cadastro(x);
			break;
						
			case 2: qtdCadastro(x);
			break;
			
			case 3: bubblesort(x);
			break;
			
			case 4: qtdOficina(x);
					qtdMinicurso(x);
			break;
		}
		
		
	}while(opcao!=0);
	
		
}
int qtdCadastro(struct pessoa x[T]){
	printf("A quantidade de pessoas cadastradas é igual a %d.\n", y);
	return y;
}
int qtdOficina(struct pessoa x[T]){
	printf("A quantidade de pessoas cadastradas em oficinas é igual a %d.\n", cont);
	return cont;
}
int qtdMinicurso(struct pessoa x[T]){
	printf("A quantidade de pessoas cadastradas em minicursos é igual a %d.\n", cont2);
	return cont2;
}

void cadastro(struct pessoa x[T]){
	printf("\n\tCADASTRO DE CONTAS\n\n");		
			printf("Nome: ");
			fflush(stdin);
			gets(x[y].nome);
			fflush(stdin);
			printf("CPF: ");
			scanf("%d", &x[y].cpf);
			printf("Instituição: ");
			fflush(stdin);
			gets(x[y].instituicao);
			fflush(stdin);	
			printf("Email: ");
			fflush(stdin);
			gets(x[y].email);
			fflush(stdin);
			printf("Atividade: ");
			fflush(stdin);
			gets(x[y].atividade);
			fflush(stdin);		
			y++;
}
void qtdAtividade(struct pessoa x[T]){
	int i, cont=0;
	for(i=0; i<T; i++){
		if(x[i].atividade=='oficina'){
			cont++;
		}
	}
}
void qtdAtividade2(struct pessoa x[T]){
	int i;
	for(i=0; i<T; i++){
		if(x[i].atividade=='minicurso'){
			cont2++;
		}
	}	
}
void bubblesort(struct pessoa x[T]){
	int i, j, z, qtd=0;
	struct pessoa aux;
	if(y==1){
		for(z=0; z<y; z++){
			printf("Nome: %s\n", x[z].nome);
			printf("CPF: %d\n", x[z].cpf);
			printf("Instituição: %s\n", x[z].instituicao);
			printf("Email: %s\n", x[z].email);
			printf("Atividade: %s\n", x[z].atividade);
			printf("\n");
		}
	}else{
		for(i=0; i<T; i++){
			for(j=i+1; j<T; j++){
				if(x[i].nome<x[j].nome){
					strcpy(aux.nome, x[i].nome);
					strcpy(aux.instituicao, x[i].instituicao);
					strcpy(aux.email, x[i].email);
					strcpy(aux.atividade, x[i].atividade);
					aux.cpf = x[i].cpf;
				
					strcpy(x[i].nome, x[j].nome);
					strcpy(x[i].instituicao, x[j].instituicao);
					strcpy(x[i].email, x[j].email);
					strcpy(x[i].atividade, x[j].atividade);
					x[i].cpf = x[j].cpf;
				
					strcpy(x[j].nome, aux.nome);				
					strcpy(x[j].instituicao, aux.instituicao);
					strcpy(x[j].email, aux.email);
					strcpy(x[j].atividade, aux.atividade);
					x[j].cpf = aux.cpf;
				}
			}
		}			
		for(z=0; z<y; z++){
			printf("Nome: %s\n", x[z].nome);
			printf("CPF: %d\n", x[z].cpf);
			printf("Instituição: %s\n", x[z].instituicao);
			printf("Email: %s\n", x[z].email);
			printf("Atividade: %s\n", x[z].atividade);
			printf("\n");
		}
	}
}
