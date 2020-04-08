/*Questão resolvida 1 do livro.*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[2][2], resultante[2][2], maior, i, j;
	
	for(i=0; i<2; i++){
		
		for(j=0; j<2; j++){
			
			printf("Digite os valores da matriz[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
			
		}
		
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
			if(matriz[i][j]>maior){
	
				maior=matriz[i][j];
		}
	}
	
}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
				
				resultante[i][j]=matriz[i][j] * maior;
					
		}
		
}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
			printf("A matriz resultante[%d][%d] = %d\n", i, j, resultante[i][j]);
		
		}
	}

	system("pause");
	return 0;
}


