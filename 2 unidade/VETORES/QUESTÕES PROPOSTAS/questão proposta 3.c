/*
*/

#include<stdio.h>
#include<locale.h>
#define tam 3

int main(){
setlocale(LC_ALL, "portuguese");
	int i, codprod[tam], estoque[tam], codcliente, qtdproduto; 
	int cont, achou, codproduto; 
	
	for(i=0; i<tam; i++){
		
		printf("Digite o código do produto [%d]: ", i);
		scanf("%d", &codprod[i]);
		
		printf("Digite a quantidade em estoque do produto [%d]: ", i);
		scanf("%d", &estoque[i]);
				
	}
	do{
		printf("Digite o código do cliente: ");
		scanf("%d", &codcliente);
		if(codcliente==0){
			break;			
		}
		printf("Digite o código do produto: ");
		scanf("%d", &codproduto);
		printf("Digite a quantidade: ");
		scanf("%d", &qtdproduto);		
	
		for(i=0; i<tam; i++){
			
			if(codproduto==codprod[i]){
				
				achou = i;				
				cont++;		
			}
			
			if(cont==0){
			printf("Código inexistente.");
			}
			if(cont==1){
				if(qtdproduto<=estoque[achou]){
					estoque[achou] = estoque[achou] - qtdproduto;
					printf("Pedido atendido. Obrigado e volte sempre.\n");
					
				}else{
					
					printf("Não temos estoque suficiente desta mercadoria.\n");
					
				}
				
				
				
			}
			}
	}while(codcliente!=0);
	
	system("cls");
		printf("	Atualização		\n");
	for(i=0; i<tam; i++){
			
		printf("codprod[%d] = %d: \n", i, codprod[i]);
		printf("estoque[%d] = %d: \n", i, estoque[i]);
		
		
				
	}
	
	

	system("pause");
	return 0;
}


