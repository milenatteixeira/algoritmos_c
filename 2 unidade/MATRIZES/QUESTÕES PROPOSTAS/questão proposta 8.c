/*Questão proposta t2 do livro. */

#include<stdio.h>
#include<locale.h>
#define t 3
#define t2 8
int main(){
setlocale(LC_ALL, "portuguese");
	int a[t][t2], b[t][t2], s[t][t2], d[t][t2], i, j;
	
	for(i=0; i<t; i++){		
		for(j=0; j<t2; j++){			
			printf("Digite os valores da primeira matriz na posição [%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);			
		}		
	}
	for(i=0; i<t; i++){		
		for(j=0; j<4; j++){			
			printf("Digite os valores da segunda matriz na posição [%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);			
		}		
	}

	for(i=0; i<t; i++){		
		for(j=0; j<t2; j++){			
			s[i][j] = a[i][j] + b[i][j];			
		}		
	}
	
	for(i=0; i<t; i++){		
		for(j=0; j<t2; j++){			
			d[i][j] = a[i][j] - b[i][j];			
		}		
	}
		
	system("cls");
	
	printf("A soma das duas matrizes, resultando em uma terceira.\n");
	
	for(i=0; i<t; i++){		
		for(j=0; j<t2; j++){			
			printf("Matriz[%d][%d] = %d\n", i, j, s[i][j]);			
		}		
	}
	
	printf("A diferença das duas matrizes, resultando em uma quarta.\n");
	
	for(i=0; i<t; i++){		
		for(j=0; j<t2; j++){		
			printf("Matriz[%d][%d] = %d\n", i, j, d[i][j]);			
		}		
	}

	system("pause");
	return 0;
}
