#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3
#define t2 2
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t][t2], i, j, maior, novaMatriz[t][t2],y=0;
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			printf("Digite os valores da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			if(matriz[i][j]>maior){
				maior = matriz[i][j];
			}			
		}				
		for(j=0; j<t2; j++){ //novo for para mudar o índice da coluna na matriz resultante
			novaMatriz[i][j] = (matriz[i][j] * maior);
		}		
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			printf("Matriz resultante: [%d][%d] = %d\n", i, j, novaMatriz[i][j]);		
		}		
	}
	
}

