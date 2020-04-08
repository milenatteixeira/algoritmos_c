/*

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#define t 20

int main(){
setlocale(LC_ALL, "portuguese");
	char nome[t], outronome[t];
	
	printf("Digite um nome qualquer: ");
	fflush(stdin);
	gets(nome);
	fflush(stdin);
	printf("Digite outro nome qualquer: ");
	fflush(stdin);
	gets(outronome);
	fflush(stdin);
		
	//strcat - concatena um nome no outro
	strcat(nome, outronome);
	printf("Variavel contatenada: %s\n", nome);
	//strlen - conta as caracteres 
	printf("Contador de caracteres: %d\n", strlen(nome));
	
	//strstr
	strstr(nome, "a");
	printf("Ocorrencia: %s\n", strstr(nome, "x"));
	
	system("pause");
	return 0;
}



