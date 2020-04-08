//Faça uma matriz 3x3 que leia e informe o maior número da matriz e a posição dele na matriz, utilize para isso função, ou seja, uma função deve retornar o maior valor
//e outra a posição, passe a matriz por parametro, faça uma função de leitura e uma função de impressão.

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3

void ler(int a[t][t]);
void imprimir(int a[t][t]);
int maior(int a[t][t]);
int posicao(int a[t][t]);

int main(){
setlocale(LC_ALL, "portuguese");

	int m[t][t];
	
	ler(m);
	imprimir(m);
	
	printf("O maior elemento da matriz é %d.\n", maior(m));
	printf("A posição do maior elemento é %d.\n", posicao(m));	
	
	system("pause");
	return 0;
}

void ler(int a[t][t]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void imprimir(int a[t][t]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("|");
			printf("%d", a[i][j]);		
		}printf("|\n");
	}
}
int maior(int a[t][t]){
	int aux, i, j;
	int maior = a[0][0];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j]>maior){
				maior = a[i][j];
			}
		}
	}
	return maior;
}

int posicao(int a[t][t]){
	int i, j, w=0, posicao;
	int maior;
	int aux[9];
	
	maior=aux[0];
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			aux[w] = a[i][j];
			if(aux[w]>maior){
				maior = aux[w];
				posicao = w;
			}
			w++;
		}
		
	}	
	
	
	for(i=0; i<9; i++){
		printf("[%d]: %d", i, aux[i]);
	}
	
	return posicao;
}

