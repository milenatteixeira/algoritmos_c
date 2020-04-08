#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t][t], i, j, x;
	
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){			
			printf("Digite os valores da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){			
			if(i==j){
				x = matriz[i][j];
				
				for(j=0;j<t;j++){
					matriz[i][j] = (matriz[i][j] * x);		
				}
			}			
		}		
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){			
			printf("Matriz [%d][%d] = %d\n", i, j, matriz[i][j]);		
		}		
	}
	
}

