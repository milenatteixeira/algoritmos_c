//Faça um programa que receba um número inteiro positivo e diga se é primo.

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int x, i, cont;
	
	printf("Digite um número inteiro positivo: "); 
	scanf("%d", &x);
	
	for(i=1; i<x; i++){
		
		if(x%i==0){
			
			cont++;
			
		}
		
	}
	
	if(cont==2){
		
		printf("O número é primo.\n");
		
	}else{
		
		printf("O número não é primo.\n");
		
	}
	

	system("pause");
	return 0;
}


