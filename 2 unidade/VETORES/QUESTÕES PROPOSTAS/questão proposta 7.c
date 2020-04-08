/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[10], i, negativos=0, somapositivos=0;
	
	for(i=0; i<10; i++){
		printf("[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<10; i++){
		if(vetor[i]<0){
			negativos++;
		}
		if(vetor[i]>0){
			somapositivos = vetor[i] + somapositivos;
		}
	}	
	
	printf("\n\tA quantidade de negativos é igual a %d e a soma dos positivos é igual a %d.\n", negativos, somapositivos);
	
	system("pause");
	return 0;
}


