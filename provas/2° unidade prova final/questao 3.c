#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	char palavra[30], v[5], op;
	int i, x, j;
		
	do{
			
	printf("\t\t-------------------------------=;=------------------------------\n");
	printf("\t\t\t\t\tQuestão 3\n");
	printf("\t\t-------------------------------=;=------------------------------\n\n");
			
	v[1] = 'a';
	v[2] = 'e';
	v[3] = 'i';
	v[4] = 'o';
	v[5] = 'u';
	
	printf("Digite uma palavra com o tamanho >máximo< de 30 caracteres: ");
	fflush(stdin);
	gets(palavra);
	fflush(stdin);
	x = strlen(palavra);
	
	for(i=0; i<x; i++){
		for(j=1; j<=5; j++){
			if(palavra[i]==v[j]){
				palavra[i] = '*';
			}
		}		
	}
	
	printf("A palavra modificada é: %s\n\n", palavra);	
	
	printf("Continuar? S/N: ");
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



