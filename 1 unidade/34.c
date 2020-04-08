/*
34. Faça um algoritmo que leia dois numeros inteiros, representando 
os valores inicio e fim de um intervalo e imprima os multiplos 
de 5 entre eles. Exemplo:
Valores lidos: 3  17
Saida: 5 10 15
*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

	// Variaveis	
	int a, b, i;
	
	// Entrada de dados	
	printf("Informe um número: ");
	scanf("%d", &a);
		
	printf("Informe outro número: ");
	scanf("%d", &b);
	
	//Processamento		
			
	for(i=a; i<=b; i++){			
		if(i%5==0){			
			printf("%d\n", i);			
		}
	}
				
	
			
		
				
						
			

		
	system("pause");
	return 0;
}

