/*Faça um programa que leia dois vetores A e B de 5 posições de números inteiros, 
criar um menu com as 4 operações básicas da matemática 
(lembrando que: você vai somar o primeiro elemento de A com o primeiro elemento de B)
*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int soma[5], subtracao[5], multiplicacao[5], i, op; 
	float vetora[5], vetorb[5], divisao[5];
	
	do{
		
		printf("\n	Menu	\n");
		printf("0. Sair\n");
		printf("1. Soma\n");
		printf("2. Subtração\n");
		printf("3. Divisão\n");
		printf("4. Multiplicação\n");		
		
		printf("Digite a opção desejada. ");
		scanf("%d", &op);
		
		
		switch(op){
		
		case 1: printf("\nVocê escolheu soma.\n");
			
				printf("\n	Vetor A		\n");
				
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetora[%d]: ", i);
					scanf("%f", &vetora[i]);
					
				}
				
				printf("\n	Vetor B		\n");
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetorb[%d]: ", i);
					scanf("%f", &vetorb[i]);
					
				}
				
				
				for(i=0; i<5; i++){
					
					soma[i] = vetora[i] + vetorb[i];
					
				}
				
				
				for(i=0; i<5; i++){
					
					printf("\nA soma[%d] = %d\n", i, soma[i]);
					
					
				}
				
				break;
				
		case 2: printf("\nVocê escolheu subtração.\n");
			
				printf("\n	Vetor A		\n");
				
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetora[%d]: ", i);
					scanf("%f", &vetora[i]);
					
				}
				
				printf("\n	Vetor B		\n");
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetorb[%d]: ", i);
					scanf("%f", &vetorb[i]);
					
				}
				
				
				for(i=0; i<5; i++){
					
					subtracao[i] = vetora[i] - vetorb[i];
					
				}
				
				
				for(i=0; i<5; i++){
					
					printf("\nA subtração[%d] = %d\n", i, subtracao[i]);
					
					
				}
				
				break;
		case 3: printf("\nVocê escolheu divisão.\n");
			
				printf("\n	Vetor A		\n");
				
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetora[%d]: ", i);
					scanf("%f", &vetora[i]);
					
				}
				
				printf("\n	Vetor B		\n");
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetorb[%d]: ", i);
					scanf("%f", &vetorb[i]);
					
				}
				
				
				for(i=0; i<5; i++){
					
					divisao[i] = vetora[i] / vetorb[i];
					
				}
				
				
				for(i=0; i<5; i++){
					
					printf("\nA divisão[%d] = %.2f\n", i, divisao[i]);
					
					
				}
				
				break;
				
		case 4: printf("\nVocê escolheu multiplicação.\n");
			
				printf("\n	Vetor A		\n");
				
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetora[%d]: ", i);
					scanf("%f", &vetora[i]);
					
				}
				
				printf("\n	Vetor B		\n");
				for(i=0; i<5; i++){
					
					printf("Digite o elemento vetorb[%d]: ", i);
					scanf("%f", &vetorb[i]);
					
				}
				
				
				for(i=0; i<5; i++){
					
					multiplicacao[i] = vetora[i] * vetorb[i];
					
				}
				
				
				for(i=0; i<5; i++){
					
					printf("\nA multiplicação[%d] = %d\n", i, multiplicacao[i]);
					
					
				}
				
				break;
	}
		
	
	}while(op!=0);
	
	

	system("pause");
	return 0;
}


