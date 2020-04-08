#include<stdio.h>
#include<locale.h>
#define tam 30
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	FILE *arquivo;
	char ch;
	
	arquivo = fopen("Arquivo.txt","a");
	
	if(arquivo == NULL){
		printf("\n\tErro no arquivo!");
		return;
	}
	
	do{
		
		printf("\n\tDigite um caracter: ");
		ch = getchar();
		fflush(stdin);
		fputc(ch,arquivo);
		
	}while(ch != '\n');
	
	fclose(arquivo);
	system("pause");
	return 0;
}

