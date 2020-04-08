//Faça um programa que receba um vetor inteiro de 10 posições e substitua os pares pelo número 0 e os ímpares pelo número 1, exibindo o vetor antes da modificação e depois como resultado.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int v[10], i, cont;
	char op;
	
	do{
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFaça um programa que receba um vetor inteiro de 10 posições e substitua os pares pelo número 0\n");
		printf("\tos ímpares pelo número 1, e também diga a quantidade de números 1 existentes no vetor, exibindo-o\n");		
		printf("\t antes da modificação e depois como resultado.\n");
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");		
		
		for(i=0; i<10; i++){
		printf("[%d]:", i);
		scanf("%d", &v[i]);		
	}
	system("cls");
	printf("\n\tVETOR NORMAL\n");
	
	for(i=0; i<10; i++){
		printf("[%d]: %d\n", i, v[i]);
	}	
	cont=0;
	for(i=0; i<10; i++){
		if(v[i]%2==0){			
			v[i] = 0;
		}else{
			cont++;
			v[i] = 1;
		}
	}
				
	printf("\n\tVETOR MODIFICADO\n");
	for(i=0; i<10; i++){
		printf("[%d]: %d\n", i, v[i]);
	}
	printf("A quantidade de número 1 no vetor é igual a %d.\n", cont);
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");	
	
	}while(op!='n');
	
	system("pause");
	return 0;
}



