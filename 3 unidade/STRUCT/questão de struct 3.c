#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 2
struct pesquisa{
	int idade;
	char sexo;
	float renda;
	int filhos;
};
int main(){
setlocale(LC_ALL, "portuguese");
	struct pesquisa x;
	int i;
	float soma;
	for(i=0;i<t;i++){
		printf("\nDigite a renda da %d° pessoa: ", i+1);
		scanf("%f", &x[i].salario);
		printf("Digite a idade: ");
		scanf("%d", &x[i].idade);
		printf("Digite o número de filhos: ");
		scanf("%d", &x[i].nfilhos);
		printf("Digite o sexo: ");
		fflush(stdin);
		gets(x[i].sexo);
		fflush(stdin);
	}
	
	for(i=0;i<t;i++){
		soma = x[i].renda + soma;
	}
	
	printf("a media de salarios é: ", soma/t);
	
	for(i=0;i<t;i++){
		if(x[i].idade>maior){
			maior = x[i].idade;
		}
	}
	printf("a maior é: %d", maior);
	for(i=0;i<t;i++){
		if(x[i].idade<menor){
			menor = x[i].idade;
		}
	}
	printf("a menor é: %d", menor);
	for(i=0;i<t;i++){
		if(x[i].sexo=='f'){
			if(x[i].filhos>2){
				if(x[i].renda<600){
					q++;
				}
			}
		}else{
			break;
		}
	}
	printf("a quantidade: %d", q);
}
