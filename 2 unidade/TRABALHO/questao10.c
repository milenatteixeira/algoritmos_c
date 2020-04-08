/*Fa�a um MENU que calcule o seno, o cosseno e a tangente de 3 triangulos retangulos diferentes. 
O usuario dever� informar o cateto oposto, cateto adjacente e a hipotenusa do triangulo.
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int i, opcao;
	float cao[3], caa[3], h[3], s[3], c[3], t[3];	
	char op;
	
	do{		
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFa�a um MENU que calcule o seno, o cosseno e a tangente de 3 triangulos retangulos diferentes. \n");
		printf("\tO usuario dever� informar o cateto oposto, cateto adjacente e a hipotenusa do triangulo.\n");			
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");						
		
		for(i=0; i<3; i++){
		printf("Digite o cateto oposto: ");
		scanf("%f", &cao[i]);
		printf("Digite o cateto adjacente: ");
		scanf("%f", &caa[i]);
		printf("Digite a hipotenusa: ");
		scanf("%f", &h[i]);
		printf("\n");
	}									
	
	do{		
		printf("\n\tMENU\n");
		printf("0. Sair\n");
		printf("1. Calcular o seno\n");
		printf("2. Calcular o cosseno\n");
		printf("3. Calcular a tangente\n");			
		
		printf("Digite a op��o: ");
		scanf("%d", &opcao);	
		
		switch(opcao){
			case 1: printf("\nVOC� ESCOLHEU CALCULAR O SENO\n");					
		
					for(i=0; i<3; i++){
						s[i] = cao[i] / h[i];
					}
					
					printf("O seno � calculado pela divis�o entre o cateto oposto e a hipotenusa do tri�ngulo.\n");
					printf("Sendo assim, os valores dos senos dos tri�ngulos ditos s�o: \n");
					
					for(i=0; i<3; i++){
						printf("Tri�ngulo %d: %.3f\n", i, s[i]);
					}
					
					break;
					
			case 2: printf("\nVOC� ESCOLHEU CALCULAR O COSSENO\n");					
		
					for(i=0; i<3; i++){
						c[i] = caa[i] / h[i];
					}
					
					printf("O cosseno � calculado pela divis�o entre o cateto adjacente e a hipotenusa do tri�ngulo.\n");
					printf("Sendo assim, os valores dos cossenos dos tri�ngulos ditos s�o: \n");
					
					for(i=0; i<3; i++){
						printf("Tri�ngulo %d: %.3f\n", i, c[i]);
					}
					
					break;
			case 3: printf("\nVOC� ESCOLHEU CALCULAR A TANGENTE\n");					
		
					for(i=0; i<3; i++){
						t[i] = cao[i] / caa[i];
					}
					
					printf("O seno � calculado pela divis�o entre o cateto oposto e o cateto adjacente do tri�ngulo.\n");
					printf("Sendo assim, os valores das tangentes dos tri�ngulos ditos s�o: \n");
					
					for(i=0; i<3; i++){
						printf("Tri�ngulo %d: %.3f\n", i, t[i]);
					}
					
					break; 
		}
		
		
	}while(opcao!=0);
	
	printf("\nContinuar? S/N:");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	
	system("cls");
		
	}while(op!='n');	
	
	system("pause");
	return 0;
}



