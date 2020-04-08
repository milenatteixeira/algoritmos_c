#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

void ler(int a[9]);

int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[9], matriz[3][3], soma=0, soma2=0, x=0, i, j;
	char op;
	
	do{
		
	printf("\t\t-------------------------------=;=------------------------------\n");
	printf("\t\t\t\t\tQuestão 2\n");
	printf("\t\t-------------------------------=;=------------------------------\n");
	
		
	x=0;
	soma=0;
	soma2=0;
	//leitura do vetor
	printf("LEITURA DO VETOR\n");	
	ler(vetor);
	
	system("cls");
	
	//transformação do vetor para matriz
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j] = vetor[x]; 
			x++;
		}
	}
	
	//exibição da matriz
	printf("O vetor transformado em matriz é:\n");	
	imprimir(matriz);
	
	//soma da diagonal principal
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i==j){
				soma = matriz[i][j] + soma;
			}
		}
	}
	
	//soma de todos os elementos da matriz
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			soma2 = matriz[i][j] + soma2;
		}
	}
	
	printf("\n\tSoma da diagonal principal: %d\n", soma);
	printf("\tSoma de todos os elementos da matriz: %d\n", soma2);
	
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	
	if(op=='n'){
		break;
	}
	
	system("cls");
	
	}while(op!='n');
	
	
	system("pause");
	return 0;
}
void ler(int a[9]){
	int i;
	for(i=0; i<9; i++){
		printf("[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void imprimir(int a[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("|");
			printf("%d", a[i][j]);
		}printf("|\n");
	}
}

