#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int m[t][t], i, j, a[9], b[9], x, y, cont, cont2;
	char op;
	
	do{	
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFaça um programa que uma receba uma matriz 3x3, substitua os números pares pelo numero 0 \n");
		printf("\te os números ímpares pelo numero 1, mostre a matriz digitada e a matriz substituída, a ainda assim, \n");
		printf("\timprima os números substituídos por 0 em um vetor a e os números ímpares substituídos por 1 em um vetor b.");		
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------\n\n");				
			
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}	
	
	system("cls");
	printf("\n---------------------------=;=---------------------------\n");	
	printf("MATRIZ DIGITADA\n");
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("|");
			printf("%d", m[i][j]);			
		}printf("|\n");
	}
	printf("---------------------------=;=---------------------------\n");	
	x=0;
	y=0;
	cont=0;
	cont2=0;
	
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if(m[i][j]%2==0){
				cont++;
				a[x] = m[i][j];
				m[i][j] = 0;
				x++;
			}else{
				cont2++;
				b[y] = m[i][j];
				m[i][j] = 1;
				y++;
			}
		}
	}
	
	printf("MATRIZ MODIFICADA\n");
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("|");
			printf("%d", m[i][j]);			
		}printf("|\n");
	}
	printf("---------------------------=;=---------------------------\n");	
	printf("VETOR DE NÚMEROS PARES\n");
	for(i=0; i<cont; i++){		
		printf("[%d]: %d\n", i, a[i]);		
	}
	
	printf("\nVETOR DE NÚMEROS ÍMPARES\n");
	for(i=0; i<cont2; i++){		
		printf("[%d]: %d\n", i, b[i]);		
	}
	
	printf("\nContinuar? S/N:");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	
	system("cls");		
		
	}while(op!='n');
	
	system("pause");
	return 0;
}



