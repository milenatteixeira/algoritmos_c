#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 2

struct funcionario{
	float salario;
	int valortotal;
};

int main(){
setlocale(LC_ALL, "portuguese");
	struct funcionario x[t];
	
	int i;
	float comissao,salariototal;
	
	for(i=0;i<t;i++){
		printf("Digite o valor do sal�rio: ");
		scanf("%f",x[i].salario);
		printf("Digite o valor total de vendas: ");
		scanf("%d",x[i].valortotal);
	}
	
	comissao = salario*0.06;
	salariototal = salario+comissao;
	
	for(i=0;i<t;i++){
		printf("O valor do sal�rio �: %d", x[i].salario);
		printf("O valor total de vendas �: %d", x[i].valortotal);
		printf("A comiss�o �: %.2f",comissao);
		printf("O salario total �: %.2f",salariototal);
	}
}
