/*40. Fa�a um algoritmo que leia um n�mero e informe se o mesmo � ou n�o um n�mero triangular.
Por defini��o, um n�mero � triangular quando � resultado do produto de tr�s
n�meros consecutivos. Exemplos:
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
	printf("informe um n�mero inteiro: ");
	scanf("%d", &num);
	
	system("pause");
	return 0;
}


