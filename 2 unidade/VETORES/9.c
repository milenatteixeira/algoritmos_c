/*Faça um algoritmo que utilize um menu com as seguintes opções.
1.Ordenar um vetor de 5 posições crescente
2.Ordenar um vetor de 5 posições decrescente
3.Armazenar em um vetor 3, os números primos
*/

#include<stdio.h>
#include<locale.h>
#define tam 10
int main(){
setlocale(LC_ALL, "portuguese");
	int i, opcao, aux=0, x, y, cont=0, z=1;
	int l[tam], p[tam];

	printf("\n\tMENU\n");
		
	do{
		printf("\n\t0. Sair\n");
		printf("\n\t1. Ordenar crescentemente.\n");	
		printf("\n\t2. Ordenar decrescentemente.\n");	
		printf("\n\t3. Armazenar os primos.\n");
		printf("\nDigite a sua opção:\n");
		scanf("%d", &opcao);
		
		
		switch(opcao){
			
			case 1: printf("\n\tVocê escolheu ordenar crescentemente.\n");
					for(i=1; i<=tam; i++){
						printf("[%d]: ", i);
						scanf("%d", &l[i]);
					}
					
					for(i=1; i<=tam; i++){
						for(x=1; x<=tam; x++){
							if(l[i]<l[x]){
								aux = l[i];
								l[i] = l[x];
								l[x] = aux;
							}
						}
					}
					system("cls");
					printf("\n\t-------------------=;=------------------\n");
					printf("\n\tVetor ordenado:\n");
										
					for(i=1; i<=tam; i++){
						printf("[%d] = %d\n", i, l[i]);
					}
					printf("\n\t-------------------=;=------------------\n");
					
					break;
					
			case 2: printf("\n\tVocê escolheu ordenar decrescentemente.\n");
					for(i=1; i<=tam; i++){
						printf("[%d]: ", i);
						scanf("%d", &l[i]);
					}	
					
					for(i=1; i<=tam; i++){
						for(x=1; x<=tam; x++){
							if(l[i]>l[x]){
								aux = l[i];
								l[i] = l[x];
								l[x] = aux;
							}
						}
					}
					system("cls");
					printf("\n\t-------------------=;=------------------\n");
					printf("\n\tVetor ordenado:\n");
										
					for(i=1; i<=tam; i++){
						printf("[%d] = %d\n", i, l[i]);
					}
					printf("\n\t-------------------=;=------------------\n");
															
					break;
					
					
					
			case 3: printf("\n\tVocê escolheu armazenar os primos.\n");
					for(i=1; i<=tam; i++){
						printf("[%d]: ", i);
						scanf("%d", &l[i]);
					}												
			
					for(x=1; x<=tam; x++){
					y=0;
						for(i=1; i<=l[x]; i++){
							if(l[x]%i==0){
							y++; 
						}			
					}
						if(y==2){
							cont++;
							p[z] = l[x];
							z++;
						}
					}			
					system("cls");
					printf("\n\t-------------------=;=------------------\n");
					printf("\n\tVetor Armazenado.\n");
					for(x=1; x<=cont; x++){
						printf("[%d] = %d\n", x, p[x]);
					}
					printf("\n\t-------------------=;=------------------\n");
					break;
		}
		
	}while(opcao!=0);
	
	system("pause");
	return 0;
}



