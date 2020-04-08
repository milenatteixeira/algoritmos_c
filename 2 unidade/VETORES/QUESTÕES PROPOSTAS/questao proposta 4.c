#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[15], i;
	
	for(i=0; i<15; i++){
		printf("informe o elemento de [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<15; i++){
		if(vetor[i]==30){
			printf("\t[%d] = 30.\n", i);
		}
	}
	system("pause");
	return 0;
}


