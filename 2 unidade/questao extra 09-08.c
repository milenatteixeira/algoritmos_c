/*Faça uma matriz que controle as posições das cadeiras de um cinema para estreia
do filme Suicide Squad. Imagine que inicialmente a matriz seja preenchida com zero.
Faça um menu que permita cadastrar um lugar, verificar se certa cadeira esta ocupada, e
que faça um sorteio de um premio onde a cadeira seja um número impar. */

#include<stdio.h>
#include<locale.h>
#define T 4
#define t 4

int main(){
setlocale(LC_ALL, "portuguese");

	int cadeira[T][t], i, j, soma, opcao, x=0, y, z, p; 
	
	printf("\t------------------;=;----------------------\n");
	printf("\t\tControle de cadeiras\n");	
	for(i=1; i<=T; i++){
		for(j=1; j<=t; j++){
			cadeira[i][j] = 0;				
		}
	}
	
	printf("\t------------------;=;----------------------\n");
	for(i=1; i<=T; i++){
		for(j=1; j<=t; j++){
			printf("\t\t%d", cadeira[i][j]);				
		}
		printf("\t|\n");
	}
	printf("\t------------------;=;----------------------\n");
		
	printf("\t\tTodas as cadeiras estão vagas.\n");
	printf("\t\n	MENU\n");
					
	do{	printf("\t0. Sair.\n");
		printf("\t1. Cadastrar uma cadeira.\n");		
		printf("\t2. Sortear um prêmio.\n");
		printf("\t3. Mostrar a matriz.\n");
		printf("\t4. Zerar a matriz.\n\n");
		printf("\t\tDigite uma opção: ");		
		scanf("%d", &opcao);
		if(opcao==0){
			break;
		}
		
		switch(opcao){
			case 1: system("cls");
					printf("\t------------------;=;----------------------\n");
					printf("\n\tVocê escolheu cadastrar a cadeira.\n\n");
					printf("\t------------------;=;----------------------\n");
					printf("\n\tDigite a posição da sua cadeira (linha): ");
					scanf("%d", &y);
					printf("\n\tDigite a posição da sua cadeira (coluna): ");
					scanf("%d", &z);
					printf("\n\tVerificando se esta cadeira está vaga...\n");
					printf("\t------------------;=;----------------------\n");
					if(cadeira[y][z]==0){
						printf("\n\t>>>>>A cadeira está vaga.<<<<< \n");						
						cadeira[y][z] = 1;
						printf("\t>>>>Cadeira cadastrada.<<<< \n\n");
					}							
															
					break;
								
			case 2: system("cls");
					printf("\t------------------;=;----------------------\n");
					for(i=1; i<=T; i++){
						for(j=1; j<=t; j++){
							printf("\t\t%d", cadeira[i][j]);				
						}
						printf("\t|\n");
					}
					printf("\t------------------;=;----------------------\n");
					
					p = z+y;
					for(i=1; i<=T; i++){
						for(j=1; j<=t; j++){			
							if((p%2!=0) && (cadeira[i][j] == 1)){
								printf("[%d][%d] = 1 >>>Cadeira premiada, você foi sorteado a ganhar um prêmio!!\n", i, j);
							}
						}
					}
					
					break;
					
			case 3:	system("cls");
					printf("\t------------------;=;----------------------\n");
					printf("\n\tCadeiras com 1: RESERVADAS.\n");
					printf("\n\tCadeiras com 0: VAGAS.\n\n");
					printf("\t------------------;=;----------------------\n");
					for(i=1; i<=T; i++){
						for(j=1; j<=t; j++){
							printf("\t\t%d", cadeira[i][j]);				
						}
						printf("\t|\n");
					}
					printf("\t------------------;=;----------------------\n\n");
					break;			
					
			case 4: system("cls");
					printf("Matriz zerada.\n\n");
					for(i=1; i<=T; i++){
						for(j=1; j<=t; j++){
							cadeira[i][j] = 0;	
						}
					}
					break;					
	}			
		
	}while(opcao!=0);

	system("pause");
	return 0;
}


