/*25 – Faça um programa que receba a medida de dois ângulos de um 
triângulo, calcule e mostre a medida do terceiro ângulo. 
Sabe-se que a soma dos ângulos de um triângulo é 180.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int primeiroAngulo, segundoAngulo, terceiroAngulo=0;
	
	printf("Digite a medida do primeiro angulo:");
	scanf("%d", &primeiroAngulo);
	printf("Digite a medida do segundo angulo:");
	scanf("%d", &segundoAngulo);
	
	terceiroAngulo = 180 - (primeiroAngulo+segundoAngulo);
	
	printf("O terceiro angulo é igual a %d.\n", terceiroAngulo);
	
	system("pause");
	return 0;
}



