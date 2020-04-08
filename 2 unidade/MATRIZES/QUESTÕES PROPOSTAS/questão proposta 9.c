#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz [t][t], i, j, x, matrizResultante[t][t];
	
	for(i=0; i<t; i++){		
		for(j=0; j<t; j++){			
			printf("Digite os valores da matriz [%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	printf("Digite um número a ser multiplicado: ");
	scanf("%d", &x);
	
	for(i=0; i<t; i++){		
		for(j=0; j<t; j++){			
			matrizResultante[i][j] = (matriz[i][j] * x);
		}
	}
	
	for(i=0; i<t; i++){		
		for(j=0; j<t; j++){			
			printf("[%d][%d]: %d\n", i, j, matrizResultante[i][j]);			
		}
	}
}

