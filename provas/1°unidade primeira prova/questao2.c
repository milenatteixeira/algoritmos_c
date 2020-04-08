/*2. Desenvolva um algoritmo que receba um número X e simule um menu de um programa, observando
as seguintes condições:
1. Cadastrar, caso X==1; //deve pedir que o usuário digite seu nome e seu cpf e imprimir.
2. Soma, caso X==2; //deve exibir a soma de 0 a 10 (uso do for).
3. Média, caso X==3; //deve fazer a média dos ímpares entre 0 e 10 (uso do for).
4. Sair, caso X==4; //deve encerrar o programa. 

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int opcao, cpf, i, soma1, cont; 
	float soma2, media; 
	char n; 
	
		printf("\tMENU\n");
		printf("1. Cadastrar.\n");
		printf("2. Soma.\n");
		printf("3. Média.\n");
		printf("4. Sair.\n");
		
		do{
			
		printf("Digite a sua opção: ");
		scanf("%d", &opcao);
			
			
			switch(opcao){
			
				case 1: printf("Você escolheu se cadastrar.\n");
				
						printf("Por favor, digite o seu cpf: ");
						scanf("%d", &cpf);
						printf("Por favor, digite o seu nome: ");
						fflush(stdin);
						scanf("%c", &n);
						fflush(stdin);
					
						
						printf("O seu cpf é: %d\n", cpf);
						printf("O seu nome é: %c\n", n);
						break;
						
			
				case 2: printf("Você escolheu soma. \n");
						for(i=0; i<=10; i++){
							
							soma1=i+soma1;
								
							
						}
						printf("A soma é: %d\n", soma1);	
						break;
						
				case 3: printf("Você escolheu a média dos números impares. \n");
				
						for(i=0; i<=10; i++){
							
							if(i%2!=0){
								
								cont++;
								
								soma2 = soma2+i; 
								
								media = soma2/cont;
								
								
							}
								
														
						}
						printf("A média dos impares é: %.2f\n", media);
						break;
				
				case 4: system("cls");
						printf("Você escolheu fechar o programa. \n");
						break;
		}
  	}while(opcao!=4);
  	
	system("pause");
	return 0;
}


