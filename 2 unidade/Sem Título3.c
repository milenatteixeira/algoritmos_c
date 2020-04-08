/*

*/

#include<stdio.h>
#include<locale.h>
#define t 3

int main(){
setlocale(LC_ALL, "portuguese");

	int a[t][t], i, j, aux[9], x=0, aux2=0; 
	
	//Ler matriz
	for(i=0; i<t; i++){
		for(j=0; j<3; j++){
			printf("Digite o elemento da posição [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			aux[x] = a[i][j];
			x++; 
		}
	}
	//Exibir matriz
	printf("|");
	for(i=0; i<t; i++){
		for(j=0; j<3; j++){
			printf("%d", a[i][j]);			
		}
		printf("|\n");
	}
	//Ordenação (Bubble Sort
	for(i=0; i<9; i++){
		for(j=1; j<9; j++){
			if(aux[i]<aux[j]){
				aux2 = aux[i];
				aux[i] = aux[j];
				aux[j] = aux2;
			}
		}
	}
	
	for(i=0; i<9; i++){
		printf("[%d]: %d\n", i, aux[i]);		
	}

	
	//Armazenar o vetor na matriz
	x=0;
	for(i=0; i<t; i++){
		for(j=0; j<3; j++){			
			a[i][j] = aux[x];
			x++; 
		}
	}
	//Exibir a matriz novamente
	printf("\n");	
	printf("|");
	for(i=0; i<t; i++){
		for(j=0; j<3; j++){
			printf("%d", a[i][j]);			
		}
		printf("|\n");
	}
	
	
	system("pause");
	return 0;
}


