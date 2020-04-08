#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 5
int main(){
setlocale(LC_ALL, "portuguese");
	int i, j;
	float densidade[t], massa[t], volume[t], aux=0;
	char op;
	
	do{		
	printf("\n\t---------------------------------=;=-------------------------------");		
	printf("\n\tFaça um programa que receba a massa de 5 elementos quimicos\n");
	printf("\te seus respectivos volumes e calcule a sua densidade.\n\n");
	printf("\tUtilize vetores para armazenar ambos massa e volume.\n");
	printf("\tNo final, ordene as densidades da menor para a maior.\n");
	printf("\t---------------------------------=;=-------------------------------\n\n");		
	
	for(i=1; i<=t; i++){
		printf("Digite a massa (em gramas) do %d° elemento: ", i);
		scanf("%f", &massa[i]);
	}
	printf("\n");
	for(i=1; i<=t; i++){
		printf("Digite o volume (em litros) do %d° elemento: ", i);
		scanf("%f", &volume[i]);		
	}	
	system("cls");
	printf("\t\tA densidade é calculada pela divisão da massa pelo volume. D = M/V. \n\n");	
	for(i=1; i<=t; i++){
		densidade[i] = (massa[i] / volume[i]);		
		printf("A densidade do %d° elemento é igual a %.4f.\n", i, densidade[i]);
	}	
	
	for(i=1; i<=t; i++){
		for(j=i; j<=t; j++){
			if(densidade[i]>densidade[j]){
				aux = densidade[i];
				densidade[i] = densidade[j];
				densidade[j] = aux;
				aux=0;
			}
		}		
	}	
	
	printf("As densidades em ordem crescente são:\n");
	for(i=1; i<=t; i++){		
		printf("%.4f\n", densidade[i]);
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



