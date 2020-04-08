/*41. Utilizando do-while construa um menu com 4 op��es:
	1. M�dia
	2. Raiz no primeiro n�mero digitado	
	3. Indicar qual o maior n�mero
	4. Sair
Use os conhecimentos da linguagem c, o usu�rio pode sair 
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
		printf("1. M�dia.\n");
		printf("2. Raiz.\n");
		printf("3. Indicar qual o maior n�mero.\n");
		printf("4. Sair.\n");
		
		do{			
		printf("Digite a sua op��o: ");
		scanf("%d", &op);		
			switch(op){				
				case 1: printf("Voc� escolheu m�dia dos n�meros. \n");
						printf("Informe um n�mero: ");
						scanf("%d", &a);
						printf("Informe outro n�mero: ");
						scanf("%d", &b);
						
						media = (a+b)/2;
					
						printf("A m�dia � : %.2f\n", media);
						break;
				
				case 2: printf("Voc� escolheu raiz de um n�mero. \n");
						printf("Informe um n�mero: ");
						scanf("%d", &a);
						
						raiz = sqrt(a);
						
						printf("A raiz �: %d\n", raiz);
						break;
						
				case 3: printf("Voc� escolheu indicar o maior n�mero. \n");
						printf("Informe um n�mero: ");
						scanf("%d", &a);
						printf("Informe outro n�mero: ");
						scanf("%d", &b);
						
						if(a>b){
							
							printf("O maior n�mero �: %d\n", a);
							
						}
						else{
							
							printf("O maior n�mero �: %d\n", b);
						}
						break;
						
				case 4: printf("Voc� escolheu sair do programa. \n");
						break;
						
				default: printf("A op��o escolhida � inv�lida. \n");
						 break;						
			}
		}while(op!=4);
		
	system("pause");
	return 0;
}


