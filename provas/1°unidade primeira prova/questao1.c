/*1. Fa�a um programa que receba o sal�rio-base de um servidor p�blico, calcule e mostre o sal�rio
a receber, sabendo que esse servidor tem gratifica��o de 5% e imposto de 3% sobre o sal�rio base se
o sal�rio for menor ou igual a R$1200, e que se for maior ele paga imposto de 7% sobre o sal�rio base.
(Uso obrigat�rio do IF)

*/

#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int salariobase, imposto, acrescimo;
	float salariototal;
		printf("Informe o sal�rio-base: ");
		scanf("%d", &salariobase);
		
		if(salariobase<1200){
			
			imposto = (salariobase * 3)/100;
			
			acrescimo = (salariobase*5)/100;
			
			salariototal = (salariobase - imposto) + acrescimo;
			
			printf("O sal�rio total �: R$%.2f\n", salariototal);
			
			
		}else{
			
			salariototal = (salariobase*93)/100;
			
			printf("O sal�rio total �: R$%.2f\n", salariototal);
			
			
		}

	system("pause");
	return 0;
}


