/*1. Faça um programa que receba o salário-base de um servidor público, calcule e mostre o salário
a receber, sabendo que esse servidor tem gratificação de 5% e imposto de 3% sobre o salário base se
o salário for menor ou igual a R$1200, e que se for maior ele paga imposto de 7% sobre o salário base.
(Uso obrigatório do IF)

*/

#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int salariobase, imposto, acrescimo;
	float salariototal;
		printf("Informe o salário-base: ");
		scanf("%d", &salariobase);
		
		if(salariobase<1200){
			
			imposto = (salariobase * 3)/100;
			
			acrescimo = (salariobase*5)/100;
			
			salariototal = (salariobase - imposto) + acrescimo;
			
			printf("O salário total é: R$%.2f\n", salariototal);
			
			
		}else{
			
			salariototal = (salariobase*93)/100;
			
			printf("O salário total é: R$%.2f\n", salariototal);
			
			
		}

	system("pause");
	return 0;
}


