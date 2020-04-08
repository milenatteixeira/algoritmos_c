/*Os streams na plataforma Spotify tamb�m s�o usadas como vendas(SEA). Para cada 1500 reprodu��es s�o uma venda.
Digite a quantidade de streams de 5 m�sicas e converteremos em vendas. 
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int i, stream[5], vendas[5];
	char op;
	
	do{
	printf("\n\t---------------------------------=;=-------------------------------");		
	printf("\n\tOs streams na plataforma Spotify tamb�m s�o usadas como vendas(SEA).\n");
	printf("\t Para cada 1500 reprodu��es s�o uma venda.\n");
	printf("\tDigite a quantidade de streams de 5 m�sicas e converteremos em vendas. \n");
	printf("\t---------------------------------=;=-------------------------------\n");		
	
		for(i=0; i<5; i++){
		printf("Digite a quantidade de streams da %d� m�sica: ", i+1);
		scanf("%d", &stream[i]);
	}
	
	for(i=0; i<5; i++){
		vendas[i] = (stream[i]/1500);
	}
	printf("\n");
	for(i=0; i<5; i++){
		printf("A m�sica %d foi reproduzida %d vezes e vendeu %d vezes\n", i+1, stream[i], vendas[i]);
	}
	
	
	printf("\nContinuar? S/N:");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
		
	}while(op!='n');
	
	system("pause");
	return 0;
}



