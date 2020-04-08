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
	//strcmp - compara string
	if(strcmp(nome, outronome)==0){
		printf("São iguais.\n");
	}else{
		printf("São diferentes.\n");
	}
	
	
	system("pause");
	return 0;
}



