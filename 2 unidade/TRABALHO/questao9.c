#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int precos[3], pessoas[3], i, total, ps, ps2, totalps, totalps2;
	
	printf("Ingresso 1: Pista.\n");
	printf("Ingresso 2: Pista meia.\n");
	printf("Ingresso 3: Área Vip.\n\n");
	
	for(i=1; i<=3; i++){
		printf("Digite o valor do ingresso %d:", i);
		scanf("%d", &precos[i]);
		printf("Digite a quantidade de pessoas que compraram o ingresso %d:", i);
		scanf("%d", &pessoas[i]);		
	}
	total=0;
	for(i=1; i<=3; i++){
		total = total + (precos[i] * pessoas[i]);
	}
	
	printf("Digite a porcentagem da produtora em cima do lucro total: ");
	scanf("%d", &ps);
	printf("Digite a porcentagem da casa de show em cima do lucro total: ");
	scanf("%d", &ps2);
	totalps=0;
	totalps2=0;
	totalps = (total * ps) /100;
	totalps2 = (total * ps2) /100;
	
	printf("\nO lucro total é de R$%d", total);
	printf("\nA produtora receberá uma porcentagem de %d por cento que é igual a R$%d e a casa de show uma porcentagem de %d por cento igual a R$%d.\n", ps, totalps, ps2, totalps2);
	
	system("pause");
	return 0;
}



