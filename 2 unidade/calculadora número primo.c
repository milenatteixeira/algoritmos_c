//Fa�a um programa que receba um n�mero inteiro positivo e diga se � primo.

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int x, i, cont;
	
	printf("Digite um n�mero inteiro positivo: "); 
	scanf("%d", &x);
	
	for(i=1; i<x; i++){
		
		if(x%i==0){
			
			cont++;
			
		}
		
	}
	
	if(cont==2){
		
		printf("O n�mero � primo.\n");
		
	}else{
		
		printf("O n�mero n�o � primo.\n");
		
	}
	

	system("pause");
	return 0;
}


