/*35. Faça um algoritmo que leia uma sequencia de numeros inteiros terminada por 0 
e imprima o maior, o menor e a média aritmetica dos 
numeros. O numero 0 não faz parte da sequencia. 
Exemplo:
Valores lidos: 20 -3 4 -7 1 0
Saida: Maior: 20 Menor: -7 Media = 3*/


#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n, maior, menor, cont=1;
	float soma=0;
	
	while(n!=0){
		printf("Informe quantos números desejar (um de cada vez): ");
		scanf("%d", &n);
		
		if(cont==1){
			
			menor = n;
			maior = n;
				
		}		
		if(n==0){break;}
	}
	
	if(n>maior){		
		maior = n;		
	}
	
	if(n<menor){		
		menor = n;		
	}
	
	soma = (soma + n)/cont;
	cont++;
	
	printf("O menor número: %d\n", menor);
	printf("O maior número: %d\n", maior);
	printf("A soma é: %.1f\n", soma);
			
	system("pause");
	return 0;
}

