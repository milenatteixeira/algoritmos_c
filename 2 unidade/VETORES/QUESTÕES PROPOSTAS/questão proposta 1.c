#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[6], i, pares, impares, cont=0, cont2=0; 
	
	for(i=0; i<6; i++){		
		printf("Digite o elemento [%d]: ", i);
		scanf("%d", &vetor[i]);		
	}
	
	printf("\nN�meros pares.\n");
	for(i=0; i<6; i++){		
		if(vetor[i]%2==0){
			printf("posi��o[%d]: %d\n", i, vetor[i]);
			cont++;		
		}
	}
	printf("\nN�meros impares.\n");
	for(i=0; i<6; i++){		
		if(vetor[i]%2==1){
			printf("posi��o[%d]: %d\n", i, vetor[i]);
			cont2++;		
		}
	}
	printf("\nA quantidade de pares �: %d\n", cont);
	printf("A quantidade de impares �: %d\n", cont2);

	system("pause");
	return 0;
}
