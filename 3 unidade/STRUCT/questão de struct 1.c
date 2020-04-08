#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3

struct hab{
	char sexo;
	float alt;
	int idade;
	char cor;
};

int main(){
setlocale(LC_ALL, "portuguese");
	struct hab x[t];
	int i, soma=0, q=0, maior;
	float perc, media=0;
	
	//leitura da estrutura
	for(i=0;i<t;i++){
		printf("Sexo: ");		
		fflush(stdin);
		scanf("%c",&x[i].sexo);		
		fflush(stdin);
		printf("Altura: ");
		fflush(stdin);
		scanf("%f", &x[i].alt);
		fflush(stdin);
		printf("Idade: ");
		fflush(stdin);
		scanf("%d", &x[i].idade);
		fflush(stdin);
		printf("Cor: ");
		fflush(stdin);
		scanf("%c", &x[i].cor);
		fflush(stdin);
	}
	//impressão da estrutura
	for(i=0;i<t;i++){
		printf("\nSexo: %c\n", x[i].sexo);
		printf("Altura: %.2f\n", x[i].alt);
		printf("Idade: %d\n", x[i].idade);
		printf("Cor: %c\n", x[i].cor);
	}
	//calculo da media de idade
	for(i=0;i<t;i++){
		if(x[i].cor=='c' && x[i].alt>1.6){
			soma = x[i].idade + soma;
			q++;
		}
	}
	media =soma/q;
	printf("a media é %.2f", media);
	//calculo da maior idade
	for(i=0;i<t;i++){
		if(x[i].idade>maior){
			maior = x[i].idade;
		}
	}
	q=0;
	printf("%d",maior);
	//calculo da quantidade 
}
