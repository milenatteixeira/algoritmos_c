/*36. Fa�a um algoritmo que calcule o produto  
de 2 n�meros inteiros lidos (num1 e num2) 
atrav�s do m�todo de somas sucessivas. S
uponha que num1 e num2 s�o positivos. Exemplo:
Valores lidos: 3  4
C�lculo: 3 x 4 = 3 + 3 + 3 +3 = 12
Sa�da: 12 
*/


#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n1, n2, soma, produto;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &n1);
	printf("Informe outro n�mero inteiro: ");
	scanf("%d", &n2);

	produto = n1*n2;

	system("pause");
	return 0;
}

