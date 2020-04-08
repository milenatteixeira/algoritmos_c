/* 1-Calcular a média final de um aluno que realizou 3 provas, onde: MF= P1+P2+P3/3.
*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	float a, b, c, m; 
	
	printf("Insira a primeira nota: ");
	scanf("%f", &a);
		
	printf("Insira a segunda nota: ");
	scanf("%f", &b);
		
	printf("Insira a terceira nota: ");
	scanf("%f", &c);
		
	m=(a+b+c)/3;
		
	printf("A média é: ");
	printf("%.2f\n", m);		
		
	system("pause");
	return 0;
}