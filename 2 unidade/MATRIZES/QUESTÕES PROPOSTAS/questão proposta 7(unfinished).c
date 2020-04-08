#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 4
#define t2 6
int main(){
setlocale(LC_ALL, "portuguese");
	int m[t][t2], n[t2][t], i, j, soma=0;
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			printf("Digite os valores de m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);			
		}		
	}
	
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			printf("Digite os valores de n[%d][%d]: ", i, j);
			scanf("%d", &n[i][j]);			
		}		
	}
	printf("Soma das linhas de M.\n");
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){		
			printf("Digite os valores da m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);			
		}		
	}
}

