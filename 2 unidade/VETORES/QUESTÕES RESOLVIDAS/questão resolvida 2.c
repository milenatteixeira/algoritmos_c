/*Questão resolvida n° 2 do livro. */

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int qtdvendidas[5], preco[5], i, soma=0, totalvendedor[5];
	
	for(i=0; i<5; i++){
		
		printf("Digite a quantidade de peças vendidas [%d]: ", i);
		scanf("%d", &qtdvendidas[i]);
		
		printf("Digite o preço da peça vendida [%d]: ", i);
		scanf("%d", &preco[i]);
		
	}
	
	for(i=0; i<5; i++){
		
		soma = qtdvendidas[i] + soma; 
		
	}
	
	for(i=0; i<5; i++){
		
		totalvendedor[i] = qtdvendidas[i] * preco[i]; 
		
	}
	
	printf("A quantidade total de peças vendidas é: %d\n", soma);
	
	for(i=0; i<5; i++){
		
		printf("O valor total da venda do vendedor [%d] é = %d\n", i, totalvendedor[i]);
		
	}
	

	system("pause");
	return 0;
}


