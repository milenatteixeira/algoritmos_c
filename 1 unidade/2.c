/*2)Calcular a �rea de um tri�ngulo, onde: area= b*h/2.*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int b, h, a;
	printf("Informe a base do triangulo: ");
	scanf("%d", &b);
		
	printf("Informe a altura do triangulo: ");
	scanf("%d", &h);

	a=(b*h)/2;
		
	printf("A area do triangulo �: ");
	printf("%d\n", a);

	system("pause");
	return 0;
}

