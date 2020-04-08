/*40. Faça um algoritmo que leia um número e informe se o mesmo é ou não um número triangular.
Por definição, um número é triangular quando é resultado do produto de três
números consecutivos. Exemplos:
6 = 1 * 2 * 3
24 = 2 * 3 * 4
60 = 3 * 4 * 5
120 = 4 * 5 *6

*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int num; 
	printf("informe um número inteiro: ");
	scanf("%d", &num);
	
	system("pause");
	return 0;
}


