#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

void ler(char a[30]);
int main(){
setlocale(LC_ALL, "portuguese");
	char palavra[30], palavra2[5], op, aux[30];
	
	do{	
		printf("\t\t-------------------------------=;=------------------------------\n");
		printf("\t\t\t\t\tQuest�o 1\n");
		printf("\t\t-------------------------------=;=------------------------------\n");
		
		//Entrada de dados		
		ler(palavra);
		printf("\tDigite a palavra 'Prova': ");
		fflush(stdin);
		gets(palavra2);
		fflush(stdin);
		
		//Tamanho da palavra
		printf("\tO tamanho da palavra digitada � igual a %d.\n\n", strlen(palavra));
		
		//Copia da palavra
		strcpy(aux, palavra);
		printf("\tVari�vel copiada: %s\n", aux);
		
		//Compara��o
		if(strcmp(palavra, palavra2)==0){
		printf("\tS�o iguais.\n");
		}else{
		printf("\tS�o diferentes.\n");
		}
				
		printf("\nContinuar? S/N: ");
		fflush(stdin);
		scanf("%c", &op);
		fflush(stdin);
	
		if(op=='n'){
			break;
		}	
		
		system("cls");
		
	}while(op!='n');	
	
	system("pause");
	return 0;
}
void ler(char a[30]){
		printf("\tDigite a palavra desejada: ");
		fflush(stdin);
		gets(a);
		fflush(stdin);		
}


