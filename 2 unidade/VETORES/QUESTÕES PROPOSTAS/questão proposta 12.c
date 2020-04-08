/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[5], i, soma=0;
	for(i=1; i<6; i++){
		printf("Digite o %d° número: \n", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i=1; i<6; i++){
		soma = vetor[i] + soma; 
	}
	
	printf("Os números digitados foram: \n");
	printf("%d + %d + %d + %d + %d = %d. \n", vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], soma);

	system("pause");
	return 0;
}


