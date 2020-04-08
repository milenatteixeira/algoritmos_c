#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

void ler(int a[5]);

int main(){
	setlocale(LC_ALL, "portuguese");

	int vetor[5], i, maior;

	ler(vetor);

	maior=vetor[0];

	for(i=0;i<5; i++){
		if(vetor[i]>maior){
			maior = vetor[i];
		}
	}	
	
	printf("O maior elemento é: %d", maior);
			
	system("pause");
	return 0;
}

void ler(int a[5]){
	int i;
	for(i=0;i<5; i++){
		printf("[%d]:", i);
		scanf("%d", &a[i]);
	}
}


