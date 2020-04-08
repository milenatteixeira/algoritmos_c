#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t1 6
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t1][t], maior, menor;
	int i, j;
	
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			printf("Digite os valores da matriz [%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			if(matriz[i][j]>maior){
				maior = matriz[i][j];
			}
		}
	}
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			if(matriz[i][j]<menor){
				menor = matriz[i][j];
			}
		}
	}
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			if(maior==matriz[i][j]){
				printf("O maior número da matriz é %d e sua posição é: Linha %d e Coluna %d.\n", maior, i, j);
			}
		}
	}
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			if(menor==matriz[i][j]){
				printf("O menor número da matriz é %d e sua posição é: Linha %d e Coluna %d.\n", menor, i, j);
			}
		}
	}
}
