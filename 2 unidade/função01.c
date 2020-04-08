/*

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

//escopo - identidade da função
void imprimir();

int main(){
setlocale(LC_ALL, "portuguese");
	//chamada da função
	imprimir();	
	system("pause");
	return 0;
}

//implementação da função
void imprimir(){
	printf("\nEsta é uma função.\n");
}

