//Revisão de vetores
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 5

int main(){
setlocale(LC_ALL, "portuguese");
	int v[t], i, aux, menor, maior, par[t], impar[t], x;
	
	//leitura de vetor
	for(i=0; i<t; i++){
		printf("[%d]:", i);
		scanf("%d", &v[i]);
	}
	
	//impressão de vetor
	for(i=0; i<t; i++){
		printf("[%d]: %d\n", i, v[i]);		
	}
	
	//Bubble sort 1 
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if(v[i]<v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	//Maior e menor
	for(i=0; i<t; i++){
		if(v[i]>maior){
			maior = v[i];
		}
	}	
	for(i=0; i<t; i++){
		if(v[i]<menor){
			menor = v[i];
		}
	}	
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("\t------------------;=;----------------------\n");	
	//Pares e Ímpares
	
	
	system("pause");
	return 0;
}
