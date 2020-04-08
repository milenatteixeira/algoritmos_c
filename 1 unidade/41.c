/*41. Utilizando do-while construa um menu com 4 opções:
	1. Média
	2. Raiz no primeiro número digitado	
	3. Indicar qual o maior número
	4. Sair
Use os conhecimentos da linguagem c, o usuário pode sair 
quando digitar 4. 
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL, "portuguese");
	float media; 
	int op, a, b, raiz;
	
		printf("	MENU	\n");
		printf("1. Média.\n");
		printf("2. Raiz.\n");
		printf("3. Indicar qual o maior número.\n");
		printf("4. Sair.\n");
		
		do{			
		printf("Digite a sua opção: ");
		scanf("%d", &op);		
			switch(op){				
				case 1: printf("Você escolheu média dos números. \n");
						printf("Informe um número: ");
						scanf("%d", &a);
						printf("Informe outro número: ");
						scanf("%d", &b);
						
						media = (a+b)/2;
					
						printf("A média é : %.2f\n", media);
						break;
				
				case 2: printf("Você escolheu raiz de um número. \n");
						printf("Informe um número: ");
						scanf("%d", &a);
						
						raiz = sqrt(a);
						
						printf("A raiz é: %d\n", raiz);
						break;
						
				case 3: printf("Você escolheu indicar o maior número. \n");
						printf("Informe um número: ");
						scanf("%d", &a);
						printf("Informe outro número: ");
						scanf("%d", &b);
						
						if(a>b){
							
							printf("O maior número é: %d\n", a);
							
						}
						else{
							
							printf("O maior número é: %d\n", b);
						}
						break;
						
				case 4: printf("Você escolheu sair do programa. \n");
						break;
						
				default: printf("A opção escolhida é inválida. \n");
						 break;						
			}
		}while(op!=4);
		
	system("pause");
	return 0;
}


