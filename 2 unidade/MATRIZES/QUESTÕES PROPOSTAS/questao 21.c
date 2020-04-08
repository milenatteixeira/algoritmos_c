#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3
#define t2 5
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[4][t2], i, j, vetor[5], soma;
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			printf("Digite os valores da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	for(j=0; j<t2; j++){
		for(i=0; i<t; i++){			
			soma = soma + matriz[i][j];
		}
		vetor[j]=soma;
		soma=0;		
	}
	
	for(j=0; j<t2; j++){			
		printf("%d=%d\n", j, vetor[j]);		
	}	
	
	for(j=0; j<t2; j++){			
		matriz[3][j] = vetor[j];		
	}
	
	for(i=0; i<=t; i++){
		for(j=0; j<t2; j++){			
			printf("[%d][%d] = %d\n", i, j, matriz[i][j]);		
		}		
	}
}

