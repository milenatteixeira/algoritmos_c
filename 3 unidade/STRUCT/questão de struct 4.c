#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 3
struct pessoas{
	float salario;
	int idade;
	int nfilhos;
};
int main(){
setlocale(LC_ALL, "portuguese");
	struct pessoas x[t];
	int i;
	float media=0,soma=0,maior,perc;
	
	for(i=0;i<t;i++){
		printf("Digite o sal�rio da %d� pessoa: ", i+1);
		scanf("%f", &x[i].salario);
		printf("Digite a idade: ");
		scanf("%d", &x[i].idade);
		printf("Digite o n�mero de filhos: ");
		scanf("%d", &x[i].nfilhos);
	}
		
	for(i=0;i<t;i++){
		soma = x[i].salario + soma;
	}
	media = (soma/t);	
	printf("A m�dia de sal�rio �: %.2f", media);
	
	media=0; 
	soma=0;
	
	for(i=0;i<t;i++){
		soma = x[i].nfilhos + soma;
	}
	media = (soma/t);	
	printf("A m�dia de n�mero de filhos �: %.2f", media);
	
	for(i=0;i<t;i++){
		if(x[i].salario>maior){
			maior = x[i].salario;
		}
	}
	printf("O maior s�lario �: %.2f",maior);
}
