/*

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

//escopo - identidade da fun��o
void imprimir();

int main(){
setlocale(LC_ALL, "portuguese");
	//chamada da fun��o
	imprimir();	
	system("pause");
	return 0;
}

//implementa��o da fun��o
void imprimir(){
	printf("\nEsta � uma fun��o.\n");
}

