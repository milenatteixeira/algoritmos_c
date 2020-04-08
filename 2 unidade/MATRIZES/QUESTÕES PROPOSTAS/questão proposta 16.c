#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[3][3], i, j, soma=0, cont=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){			
			printf("Digite os valores da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){			
			if(i==j){
				soma = soma+matriz[i][j];
				cont++;
			}
		}		
	}	
	printf("A média é: %d", (soma/cont));
}

