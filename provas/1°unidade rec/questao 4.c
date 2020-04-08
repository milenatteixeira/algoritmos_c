/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int maior, cont;
	float num, menor, soma=0, media; 
	cont=0;
	do{
		
		printf("Digite uma sequencia de números (um de cada vez): ");
		scanf("%f", &num);
		
		
		if(num==-1){
			break;
		}
		
		cont++;
		
		soma = soma + num; 
	
	
		if(cont==1){
			
			maior = num;
			menor = num;
			
		}		
		
		
		if(maior<num){
			
			menor = maior;
			maior = num;
			
			
		}
		
		if(menor>num){
			
			menor = num;
			
		}
		
	}while(num!=-1);
	
	media = soma/cont;
	
	printf("O número maior é: %d\n", maior);
	printf("O número menor é: %.2f\n", menor);
	printf("A média é: %.2f\n", media);

	system("pause");
	return 0;
}


