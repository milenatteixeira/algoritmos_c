/*Faça um menu que controle as vendas de uma peça de teatro "Harry Potter and The Cursed Child. 
Deverá ser uma matriz 4x4, O menu deverá exibir o preço de cada tipo de ingresso, efetuar a compra do ingresso, mostrar a 
matriz que mostre os lugares ocupados (1) e vagos (0). Se o usuário comprar mais de 3 ingressos, recebe desconto de 30%.*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	char m[t][t], opp, i, j;
	int opcao, y, z, op, qtd, ingresso;
	
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFaça um menu que controle as vendas de uma peça de teatro 'Harry Potter and The Cursed Child.' \n");
		printf("\tDeverá ser uma matriz 4x4, O menu deverá exibir o preço de cada tipo de ingresso, efetuar \n");
		printf("\ta compra do ingresso, mostrar a matriz que mostre os lugares ocupados (1) e vagos (0).\n");		
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");
				
	printf("\t------------------;=;----------------------\n");
	printf("\t\tControle de Vendas\n");
	for(i=1; i<=t; i++){
		for(j=1; j<=t; j++){
			m[i][j] = 0;				
		}
	}
	
	printf("\t------------------;=;----------------------\n");
	for(i=1; i<=t; i++){
		for(j=1; j<=t; j++){
			printf("\t\t%d", m[i][j]);				
		}
		printf("\t|\n");
	}
	printf("\t------------------;=;----------------------\n");
		
	printf("\t\tTodas as cadeiras estão vagas.\n");
	printf("\t\n	MENU\n");
					
	do{	printf("\t0. Sair.\n");
		printf("\t1. Exibir os valores dos ingressos.\n");		
		printf("\t2. Comprar ingressos.\n");
		printf("\t3. Mostrar as cadeiras ocupadas(e vagas).\n");
		printf("\t4. Zerar o programa.\n\n");
		
		printf("\t\tDigite uma opção: ");		
		scanf("%d", &opcao);
		
		if(opcao==0){
			break;
		}
		
		switch(opcao){					
			case 1: system("cls");
					printf("\t--------------------;=;------------------------\n");
					printf("Temos os seguintes tipos de ingressos e valores: \n");
					printf("0. Cadeira convencional: R$30.\n");
					printf("1. Cadeira convencional(meia): R$15.\n");												
					printf("2. Cadeira premium: R$50.\n");
					printf("3. Cadeira premium(meia): R$25.\n");
					printf("4. Camarote: R$45.\n");
					printf("5. Camarote(meia): R$20.\n");																									
					printf("\t--------------------;=;------------------------\n");
					printf("\n\n");
					break;
								
			case 2: printf("\t--------------------;=;------------------------\n");
					printf("Digite a opção de ingresso que deseja: \n");
					scanf("%d", &op);
					
					if(op==0){						
						ingresso = 30;		
						printf("Seu ingresso será: %d.\n", ingresso);
						}											
					
					if(op==1){						
						ingresso = 15;		
						printf("Seu ingresso será: %d.\n", ingresso);
						}											
					
					
					if(op==2){						
						ingresso = 50;		
						printf("Seu ingresso será: %d.\n", ingresso);
						}											
					
					
					if(op==3){						
						ingresso = 25;		
						printf("Seu ingresso será: %d.\n", ingresso);
						}											
					
					
					if(op==4){						
						ingresso = 45;		
						printf("Seu ingresso será: %d.\n", ingresso);
						}											
									
					if(op==5){						
						ingresso = 20;		
						printf("Seu ingresso será: %d.\n", ingresso);
						}											
					
					printf("\n\tDigite a posição da sua cadeira (linha): ");
					scanf("%d", &y);
					printf("\n\tDigite a posição da sua cadeira (coluna): ");
					scanf("%d", &z);
					printf("\n\tVerificando se esta cadeira está vaga...\n");
					printf("\t------------------;=;----------------------\n");
					if(m[y][z]==0){
						printf("\n\t>>>>>A cadeira está vaga.<<<<< \n");						
						m[y][z] = 1;
						printf("\t>>>>Cadeira cadastrada.<<<< \n\n");
					}else if(m[y][z]==1){
								printf("\t>>>>ABRA A RELAÇÃO DE CADEIRAS E ESCOLHA A QUE TIVER COM 0.<<<< \n\n");						
							}											
										
					break;
					
			case 3:	system("cls");
					printf("\t------------------;=;----------------------\n");
					printf("\n\tCadeiras com 1: RESERVADAS.\n");
					printf("\n\tCadeiras com 0: VAGAS.\n\n");
					printf("\t------------------;=;----------------------\n");
					for(i=1; i<=t; i++){
						for(j=1; j<=t; j++){
							printf("\t\t%d", m[i][j]);				
						}
						printf("\t|\n");
					}
					printf("\t------------------;=;----------------------\n\n");
										
					
					break;								
			case 4: printf("Todas as cadeiras estão zerada.\n\n");
					for(i=1; i<=t; i++){
						for(j=1; j<=t; j++){
							m[i][j] = 0;	
						}
					}
					
					system("cls");
					
					break;	
										
			default: break;				
	}			
		
	}while(opcao!=0);	
	
	system("pause");
	return 0;
}



