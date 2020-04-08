/*Fazer um programa que leia 5 posições, e crie um segundo vetor, substituindo os valores pares por 1.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int primeiro[5], segundo[5], i;
	
	for(i=0; i<5; i++){
		
		printf("digite o elemento do primeiro[%d]: ", i);
		scanf("%d", &primeiro[i]);
				
	}
	
	for(i=0; i<5; i++){
		
		segundo[i]=primeiro[i];
		
		if(primeiro[i]%2==0){
			
			segundo[i]=1;
			
		}
				
	}
	
	system("cls");
	
	printf("	Primeiro Vetor	\n");
	
	for(i=0; i<5; i++){
			
		printf("primeiro[%d] = %d\n", i, primeiro[i]);
				
	}
	
	printf("	Segundo Vetor	\n");
	
	for(i=0; i<5; i++){
			
		printf("segundo[%d] = %d\n", i, segundo[i]);
				
	}
	
	
	

	system("pause");
	return 0;
}


