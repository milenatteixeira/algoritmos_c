#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 4
#define t2 2
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[4][2], i, j, soma, vetor[2], y=0, matrizResultante[t][t2];
	
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(j=0;j<2;j++){
		soma=0;
		for(i=0;i<4;i++){
			soma = matriz[i][j] + soma;
		}
		vetor[j] = soma;
	}
	
	for(j=0;j<2;j++){
		for(i=0;i<4;i++){			
			matrizResultante[i][j] = (matriz[i][j] * vetor[j]);							
		}
	}
	system("cls");
	
	for(j=0;j<2;j++){		
		printf("Soma da %d° coluna = %d\n", j, vetor[j]);
		printf("Elemento da matriz na coluna %d será multiplicado pelo valor de %d\n\n", j, vetor[j]);
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			printf("Matriz: [%d][%d] = %d     Matriz Resultante [%d][%d]: %d\n", i, j, matriz[i][j], i, j, matrizResultante[i][j]);
		}
	}
}
