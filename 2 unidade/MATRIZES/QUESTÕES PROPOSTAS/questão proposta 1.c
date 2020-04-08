#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[3][5], i, j, cont=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){			
			printf("Digite os valores da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}		
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){			
			if((matriz[i][j]>=15) && (matriz[i][j]<=20)){				
				cont++; 				
			}
		}	
	}
	
	printf("A quantidade de elementos entre 15 e 20 é: %d\n", cont);

	system("pause");
	return 0;
}
