#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	//declara��o de ponteiro	
	int *ponteiro;
	int x;
	
	// * - valor
	//& - endere�o de memoria
	
	ponteiro = &x;
	x=10;
	
	printf("valor de x �: %d\n", x);
	printf("o valor do ponteiro �: %p\n", &ponteiro);
	
	system("pause");
	return 0;
}



