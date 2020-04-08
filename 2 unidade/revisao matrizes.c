#include<stdio.h>
#include<locale.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int a[t][t], i, j, vetor[9], x=0, auxiliar; 
	//Ler matriz
	for(i=0; i<t; i++){
		for(j=0; j<3; j++){
			printf("Digite o elemento da posição [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			//passar matriz para vetor
			vetor[x] = a[i][j];
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
	//Ordenação (Bubble Sort)
	for(i=0; i<9; i++){
		for(j=1; j<9; j++){
			if(vetor[i]<vetor[j]){
				auxiliar = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = auxiliar;
			}
		}
	}
	
	//Armazenar o vetor na matriz
	x=0;
	for(i=0; i<t; i++){
		for(j=0; j<3; j++){			
			a[i][j] = vetor[x];
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
