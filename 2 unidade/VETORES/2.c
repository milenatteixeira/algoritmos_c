/* Ler vetor de n posições, armazenar os números negativos em um vetor e os positivos em outro e exibir ambos.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int a[5], n[5], p[5], i, x, y;
	
	for(i=0; i<5; i++){
		
		printf("digite o vetor [%d]: ", i);
		scanf("%d", &a[i]);
		
	}
	
	for(i=0; i<5; i++){

		if(a[i]<0){
			
			n[x] = a[i];
			x++;
		}
		else{
			
			p[y] = a[i];
			y++;
		}
	
	}
	
	printf("\n	Negativos\n");
	
	for(i=0; i<5; i++){
		
		printf("[%d] = %d\n", i, n[i]);
		
	}
	
	printf("\n	Positivos\n");
	
	for(i=0; i<5; i++){
		
		printf("[%d] = %d\n", i, p[i]);
		
	}

	system("pause");
	return 0;
}


