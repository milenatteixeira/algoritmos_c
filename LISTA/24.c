/*24 . Faca um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera, sabe-se que C = 2piR; 
b) a area de uma esfera, sabe-se que A = piR^2; 
c) o volume de uma esfera, sabe-se que V=3/4piR^3;

*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	float R, P, C, A, V;
	
	printf("Digite o valor do raio:");
	scanf("%f", &R);
	
	P = 3.14;	
	C = ((2*P)*R);
	A = ((R*R)*P);
	V = (((3*P)/4)*R*R*R); 
	
	printf("O comprimento é %.2f. A área é %.2f. O Volume é %.2f.\n", C, A, V);
	
	system("pause");
	return 0;
}



