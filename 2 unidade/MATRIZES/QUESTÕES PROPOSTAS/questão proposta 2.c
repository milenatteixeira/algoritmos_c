#include<stdio.h>
#include<locale.h>
#define t 4
#define t1 2
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t1][t], cont=0, soma=0, qtd=0;
	int i, j;
	
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			printf("Digite os valores da matriz [%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			if((matriz[i][j]>=12) && (matriz[i][j]<=20)){
				cont++;
			}
		}
		printf("A quantidade de n�meros entre 12 e 20 na linha %d �: %d.\n", i, cont);
		cont=0;
	}
	
	for(i=0; i<t1; i++){		
		for(j=0; j<t; j++){			
			if(matriz[i][j]%2==0){
				qtd++;
				soma = matriz[i][j] + soma;
			}
		}
	}
	printf("A m�dia de n�meros pares � %d.\n", (soma/qtd));
	system("pause");
	return 0;
}
