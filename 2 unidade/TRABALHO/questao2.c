//Faça um programa que receba uma matriz 3x3, seus elementos tem que ser obrigatoriamente inteiros.
//O programa tem que exibir a matriz em ordem decrescente, sua media aritmetica, e dizer quantos números são pares.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int a[t][t];
	int i, j, x, y, cont, aux, cont2, soma, media;
	char op;
	
	do{
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFaça um programa que receba uma matriz 3x3, seus elementos tem que ser obrigatoriamente inteiros.\n");
		printf("\tO programa tem que exibir a matriz em ordem decrescente, sua media aritmetica e dizer quantos \n");
		printf("\tnúmeros são pares.");		
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------\n\n");				
		
		for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	cont=0;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if(a[i][j]%2==0){
				cont++;
			}
		}
	}
	
	cont2=0;
	soma=0;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			soma = a[i][j] + soma;
			cont2++;
		}
	}
		
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			for(x=0; x<t; x++){
				for(y=0; y<t; y++){
					if(a[i][j]>a[x][y]){
						aux = a[i][j];
						a[i][j] = a[x][y];
						a[x][y] = aux;
						aux=0;
					}
				}
			}	
		}
	}		
	printf("\n");
	printf("MATRIZ ORDENADA DECRESCENTEMENTE\n");
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("|");
			printf("%d", a[i][j]);			
		}printf("|\n");
	}
	printf("\n");
	media = soma/cont2;
	
	printf("A MÉDIA ARITMÉTICA É %d.\n", media);
	printf("A QUANTIDADE DE PARES É IGUAL A %d.\n", cont);
	
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");
	}while(op!='n');
	
	system("pause");
	return 0;
}



