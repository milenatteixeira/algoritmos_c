/*

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define t 5

//1°: escopo da função
void ler(int v[t]);
void ordenacaoo(int v[t]);
void imprimir(int v[t]);

int main(){
setlocale(LC_ALL, "portuguese");
	int a[t], i;
	printf("\n\t----------------=;=-------------------\n");
	printf("\n\t\t\tVetor\n");
	printf("\n\t----------------=;=-------------------\n\n");

	//3°: chamada da função
	ler(a);
	system("cls");
	printf("\n\t---------------------=;=-------------------\n");
	printf("\n\t\tOrdenação em bolha do vetor:\n");
	printf("\n\t---------------------=;=-------------------\n");

	//3°: chamada da função
	printf("Vetor desordenado:\n");
	imprimir(a);
	printf("\n");
	ordenacao(a);	
	printf("Vetor ordenado:\n");
	imprimir(a);
	printf("\n");
	
	
	
	system("pause");
	return 0;
}

//2°: implementação da função
void ler(int v[t]){
	int i;
	for(i=0; i<t; i++){
		printf("Digite o elemento da posição [%d]: ", i);
		scanf("%d", &v[i]);		
	}
}

void ordenacao(int v[t]){
	int i, j, aux;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if(v[i]<v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

void imprimir(int v[t]){
	int i;
	for(i=0; i<t; i++){
		printf("|");
		printf("%d", v[i]);
		printf("|");
	}
}

