/*29) Um quiosque de sorvetes vende casquinhas somente nos sabores
chocolate (letra 'c') e morango (letra 'm'). Faça um algoritmo para
imprimir uma mensagem nas seguintes condiçoes: 
- Sorvete de chocolate com mais de 3 bolas: desconto de '10%'
- Sorvete de chocolate com qualquer quantidade de bolas: desconto
de '5%'
- Sorvete de morango: desconto de '15%'
*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	char s;
	int b;
	float v, vd, vsd;
	printf("Informe o sabor do sorvete escolhido: ");
	fflush(stdin);
	scanf("%c", &s);
	fflush(stdin);
	
	printf("Informe a quantidade de bolas: ");
	scanf("%d", &b);
	
	printf("Informe o valor de cada bola: ");
	scanf("%f", &v);		
		
	switch (s){		
		case 'm':
			vsd=b*v;
			vd=b*v*85/100;
			
			printf("\nO valor sem desconto é: ");
			printf("%.2f", vsd);			
			
			printf("\nO valor com desconto é: ");
			printf("%.2f", vd);
			
			break;
		case 'c':
			if(b<3){				
				vsd=b*v;
				vd=b*v*95/100;
				printf("\nO valor sem desconto é: ");
				printf("%.2f", vsd);
				
				
				printf("\nO valor com desconto é: ");
				printf("%.2f", vd);				
			}
			else{				
				vsd=b*v;
				vd=b*v*90/100;
				printf("\nO valor sem desconto é: ");
				printf("%.2f", vsd);			
			
				printf("\nO valor com desconto é: ");
				printf("%.2f\n", vd);
			}
			break;			
		default: 
			printf("A opção escolhida é inválida. ");
			break;
	}
	
	system("pause");
	return 0;
}

