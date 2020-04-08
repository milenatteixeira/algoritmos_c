/*questão resolvida 8 do livro de algoritmos */

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int primeira[3][2], i, j, cont=0, segunda[3][2];
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			
			printf("Digite os valores da matriz[%d][%d] = ", i, j);
			scanf("%d", &primeira[i][j]);
		}
	
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			
			if(primeira[i][j]>=30){
				
				cont++;
				
			}
			
			if(primeira[i][j]==30){
				
				primeira[i][j] = 0; 
				
				segunda[i][j] = primeira[i][j];
				
			}else{
				
				segunda[i][j] = primeira[i][j];
				
			}
			
			
		}
	
	}
	
	printf("A quantidade de elementos maiores que 30 são: %d\n", cont);
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			
			printf("A segunda matriz[%d][%d] = %d\n", i, j, segunda[i][j]);
			
		}
	
	}
	


	system("pause");
	return 0;
}


