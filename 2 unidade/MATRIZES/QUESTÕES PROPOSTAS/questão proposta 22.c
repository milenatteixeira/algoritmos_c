#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3
#define t2 4
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t][t2], i, j, impares=0, qtd=0, soma=0;
	float media=0;
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			printf("Digite os valores da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			if(matriz[i][j]%2==0){
				qtd++;
			}		
		}		
	}
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			if(matriz[i][j]%2!=0){
				impares = impares + matriz[i][j];
			}		
		}		
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<t2; j++){			
			soma = soma + matriz[i][j];		
		}
	}
	media = (soma/(t*t2));
	printf("A quantidade de pares é: %d\n", qtd);
	printf("A soma dos impares é: %d\n", impares);
	printf("A média é: %d\n", media);
}

