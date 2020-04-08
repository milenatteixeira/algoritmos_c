/*Fazer um programa que leia um vetor de 5 posições de número inteiros e divida todos os seus elementos pelo maior valor do 
vetor. Mostre o vetor após os cálculos.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, maior=0;
	float vetor[5], novovetor[5];
	
	for(i=0; i<5; i++){
		
		printf("Digite o elemento vetor[%d]: ", i);
		scanf("%f", &vetor[i]);
		
	}
	
	for(i=0; i<5; i++){
		
		if(vetor[i]>maior){
			
			maior = vetor[i];
			
		}
		
	}
	
	for(i=0; i<5; i++){
		
		novovetor[i] = vetor[i] / maior;
		
	}
	
	for(i=0; i<5; i++){
		
		printf("O novo vetor será [%d] = %.2f\n", i, novovetor[i]);
		
	}
	
	
	

	system("pause");
	return 0;
}

