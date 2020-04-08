#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	//declaração de ponteiro	
	int *ponteiro;
	int x;
	
	// * - valor
	//& - endereço de memoria
	
	ponteiro = &x;
	x=10;
	
	printf("valor de x é: %d\n", x);
	printf("o valor do ponteiro é: %p\n", &ponteiro);
	
	system("pause");
	return 0;
}



