/*atualmente para uma musica entrar no top10 da billboard, é necessario vender aproximadamente 45k por semana
e para entrar no top3 é necessario 75k. digite a quantidade de vendas de 5 faixas e monte um top10 e um top13.
	
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int faixas[10], y, i, aux;
	char op; 
	
	do{
	printf("\n\t---------------------------------------------------=;=-------------------------------------------------------");		
	printf("\n\tAtualmente para uma musica entrar no Top10 da Billboard, é necessario vender aproximadamente 45k por semana\n");
	printf("\te para entrar no Top3 é necessario 75k. Digite a quantidade de vendas de 5 faixas e exiba um top10 e um top3.\n");
	printf("\t---------------------------------------------------=;=-------------------------------------------------------\n\n");				
	
	for(i=0; i<10; i++){
		printf("Digite a quantidade de vendas da %d° faixa: ", i+1);
		scanf("%d", &faixas[i]);
	}
	
	aux=0;
	
	for(i=0; i<10; i++){
		for(y=0; y<10; y++){
			if(faixas[i]>faixas[y]){
				aux = faixas[i];
				faixas[i] = faixas[y];
				faixas[y] = aux;
			}
		}
	}
	system("cls");
	printf("\n\t------------------------------=;=----------------------------------");		
	printf("\t\n>>TOP10<<\n\n");
	for(i=0; i<10; i++){
		printf("%d° Posição: %dK\n", i+1, faixas[i]);
	}
	printf("\t--------------------------------=;=-------------------------------");					
	printf("\t\n>>TOP3<<\n\n");
	for(i=0; i<3; i++){
		printf("%d° Posição: %dK\n", i+1, faixas[i]);
	}	
	printf("\t--------------------------------=;=-------------------------------\n\n");				
	
	printf("\nContinuar? S/N:");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	
		
	}while(op!='n');
	
		
	system("pause");
	return 0;
}



