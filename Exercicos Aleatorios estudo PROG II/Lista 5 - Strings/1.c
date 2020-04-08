#include<stdio.h>
#include<locale.h>
#include<string.h>
#define t 50
int main(){
setlocale(LC_ALL, "portuguese");
	char nome[t];
	
	printf("Digite um nome:");
	fflush(stdin);
	gets(nome);
	fflush(stdin);
	
	printf("%s.\n", nome);
	
	system("pause");
	return 0;
}



