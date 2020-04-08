#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 10
#define t2 5
int main(){
setlocale(LC_ALL, "portuguese");
	int produtos[t], qtd[t2][t], i, j, qtdProdutosPorArmazem, qtdProduto, maior, menor, custo, soma, y=0;
	
	for(i=0; i<t; i++){			
		printf("Digite o preço do %d° produto: ", i+1);
		scanf("%d", &produtos[t]);
	}
	
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			printf("Digite a quantidade do %d° produto presente no %d° armazem: ", j+1, i+1);
			scanf("%d", &qtd[t2][t]);
		}
	}
	
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			qtdProdutosPorArmazem = qtdProdutosPorArmazem + qtd[i][j];
		}
		printf("No %d° armazem tem %d produtos.\n", i+1, qtdProdutosPorArmazem);
		qtdProdutosPorArmazem=0;
	}	
	
	for(j=0; j<t; j++){
		for(i=0; i<t2; i++){			
			qtdProduto = qtdProduto + qtd[i][j];
		}
		printf("Em todos os armazens, há %d do %d° produto.\n", qtdProduto, j+1);
		qtdProduto=0;
	}	
	
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			if(maior>qtd[t2][t]){
				maior = qtd[t2][t];
			}
		}
	}
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			if(maior==qtd[t2][t]){
				printf("O produto com maior estoque é o %d com %d produtos e seu preço é %d.", maior, qtd[t2][t], produtos[t]);
			}
		}
	}
	
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			if(menor<qtd[t2][t]){
				menor = qtd[t2][t];
			}
		}
	}
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			if(menor==qtd[t2][t]){
				printf("O produto com menor estoque é o %d com %d produtos e seu preço é %d.", menor, qtd[t2][t], produtos[t]);
			}
		}
	}
	
	for(i=0; i<t2; i++){
		for(j=0; j<t; j++){			
			soma = soma + qtd[t2][t];
		}
		soma = (soma*produtos[y]);
		y++;
		printf("O custo do %d° armazem é: ", i+1);
	}
	
}
