/*QUESTÃO PROPOSTA 10 DO LIVRO DE ALGORITMOS */

#include<stdio.h>
#include<locale.h>
#define t 5
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t][t], i, j, soma=0; 
	
	for(i=0; i<t; i++){		
		for(j=0; j<t; j++){			
			printf("Digite os valores da matriz[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	printf("\n");
	for(j=0; j<t; j++){			
		soma = matriz[4][j] + soma; 			
	}		
		
	printf("A soma dos elemendos da linha 4 é: %d\n", soma);
	soma=0;
	
	for(i=0; i<t; i++){			
		soma = matriz[i][2] + soma; 			
	}
	
	printf("A soma dos elemendos da coluna 2 é: %d\n", soma);
	soma=0;
	
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){			
			if(i==j){				
				soma = matriz[i][j] + soma; 				
			}			
		}		
	}
	
	printf("A soma dos elemendos da diagonal principal é: %d\n", soma);
	soma=0;
	
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){			
		soma = matriz[i][j] + soma;			
		}		
	}
	
	printf("A soma de todos os elementos é: %d\n", soma);
		
	system("pause");
	return 0;
}
