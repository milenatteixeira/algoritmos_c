/*38. A conversão de graus Fahrenheit para Celsius é obtida
pela formula: C=(5*(F-32))/9.
Faça um algoritmo que calcule que calcule e escreva uma
tabela de conversão de graus Fahrenheit para Celsius, variando
de 50 a 100 de 10 em 10. 

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int f=50;
	float c;

	printf("\tTabela de conversões\n");
	
	for(f=50; f<=100; f=f+10){	
		c = 5 * (f-32) / 9;
		printf("Fahrenheit % = %d Celsius % = %.2f\n", f, c);			
	}
		
	system("pause");
	return 0;
}


