/*

*/

#include<stdio.h>
#include<locale.h>
#define t 20
int main(){
setlocale(LC_ALL, "portuguese");
	char nome[t], outronome[t];
	
	printf("Digite um nome qualquer: ");
	fflush(stdin);
	gets(nome);
	fflush(stdin);
	
	//strcpy - copia uma na outra
	strcpy(outronome,nome);
	printf("Variavel copiada: %s\n", outronome);
	
	
	system("pause");
	return 0;
}



