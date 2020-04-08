//Victor Hugo
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int v[4], i;
	char op; 
	do{
	printf("\n------------------------------------------------------=;=------------------------------------------------------\n");		
	printf("Na noite do dia 28 aconteceu o VMA 2016, com várias apresentações, queremos saber qual você acredita que foi a melhor.\n");
	printf("Atribua valores de 1 a 10 para as apresentações abaixo: \n");
	printf("1. Rihanna Greatest Hits.\n");
	printf("2. B on C com medley de limonada.\n");
	printf("3. Neyde com o Make Me Oh.\n");
	printf("4. Ariana Grande anã e Nicki Minaja com Side to Side.\n");
	printf("------------------------------------------------------=;=--------------------------------------------------------\n\n");		
	
	for(i=0; i<4; i++){
		printf("Digite a nota para a %d° apresentação: ", i+1);
		scanf("%d", &v[i]);
	}
	printf("\n");
	for(i=0; i<4; i++){
		if(v[i]>=5){
			printf("Apresentação %d: Boa/Excelente apresentação.\n", i+1);
		}else if(v[i]<5){
					printf("Apresentação %d: Apresentação lixinha. \n", i+1);
				}	 		
	}	
	
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");
	}while(op!='n');
	
	system("pause");
	return 0;
}



