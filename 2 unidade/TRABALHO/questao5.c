#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int votos[3], i, x, maior, soma;
	char op;
	
	do{
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFa�a um programa que receba a quantidade de votos que tr�s candidatos a prefeitura tiveram.\n");
		printf("\tO programa dever� calcular o total de votos e dizer qual candidato recebeu mais votos \n");
		printf("\te, portanto, ganhou a elei��o.\n");		
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");	
		
		for(i=0; i<3; i++){
		printf("Digite a quantidade de pessoas que votaram no %d� candidato: ", i+1);
		scanf("%d", &votos[i]);
	}
	soma=0;
	for(i=0; i<3; i++){		
		soma = soma + votos[i];
	}
		
	printf("No total da elei��o, houveram %d votos.\n", soma);
	
	for(i=0; i<3; i++){
		printf("O candidato %d recebeu %d votos.\n", i+1, votos[i]);
	}
	x=0;
	maior=votos[0];
	for(i=0; i<3; i++){
		if(votos[i]>maior){
			maior=votos[i];
			x=i;
		}
	}
	
	printf("O candidato %d recebeu %d votos e � considerado o ganhador da elei��o.", x+1, maior);	
	
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");
		
	}while(op!='n');
	
	system("pause");
	return 0;
}



