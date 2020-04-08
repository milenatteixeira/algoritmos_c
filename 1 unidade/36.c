/*36. Faça um algoritmo que calcule o produto  
de 2 números inteiros lidos (num1 e num2) 
através do método de somas sucessivas. S
uponha que num1 e num2 são positivos. Exemplo:
Valores lidos: 3  4
Cálculo: 3 x 4 = 3 + 3 + 3 +3 = 12
Saída: 12 
*/


#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n1, n2, soma, produto;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &n1);
	printf("Informe outro número inteiro: ");
	scanf("%d", &n2);

	produto = n1*n2;

	system("pause");
	return 0;
}

