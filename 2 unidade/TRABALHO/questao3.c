#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3

void imprimir(int a[t][t]);
int main(){
setlocale(LC_ALL, "portuguese");
	char op;
	int i, j, x, maior;
	int m[t][t], v[9], b[t][t];
	
	do{
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFaça um programa que receba uma matriz 3x3. O programa deverá armazenar a sua diagonal principal\n");
		printf("\tem um vetor e, dentre os elementos da diagonal principal, calcular o maior deles. \n");
		printf("\tApós isso, multiplicar todos os elementos da matriz pelo número maior da diagonal principal, \n");		
		printf("\tarmazenando a multiplicação em uma segunda matriz.\n");
		printf("\tNo final, exiba a primeira matriz, o vetor, o maior número da diagonal e a segunda matriz.\n");
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");				
		
		for(i=0; i<t; i++){
			for(j=0; j<t; j++){
				printf("[%d][%d]: ", i, j);
				scanf("%d", &m[i][j]);
			}
		}
		x=0;
		for(i=0; i<t; i++){
			for(j=0; j<t; j++){
				if(i==j){
					v[x] = m[i][j];
					x++;
				}
			}
		}		
		maior=v[0];
		for(i=0; i<t; i++){
			if(v[i]>maior){
				maior = v[i];
			}
		}
		for(i=0; i<t; i++){
			for(j=0; j<t; j++){
				b[i][j] = maior * m[i][j];
			}
		}
		
		system("cls");
		printf("\n---------------------------=;=---------------------------\n");	
		printf("PRIMEIRA MATRIZ\n");
		imprimir(m);
		printf("---------------------------=;=---------------------------\n");
		printf("VETOR DA DIAGONAL PRINCIPAL\n");	
		for(i=0; i<t; i++){
			printf("[%d]: %d\n", i, v[i]);
		}
		printf("O maior número dentro da diagonal principal é: %d.\n", maior);
		printf("---------------------------=;=---------------------------\n");	
		printf("SEGUNDA MATRIZ\n");
		imprimir(b);
		printf("---------------------------=;=---------------------------\n");	
		
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");		
		
	}while(op!='n');
	
	system("pause");
	return 0;
}
void imprimir(int a[t][t]){
	int i, j;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("|");
			printf("%d", a[i][j]);			
		}printf("|\n");
	}
}


