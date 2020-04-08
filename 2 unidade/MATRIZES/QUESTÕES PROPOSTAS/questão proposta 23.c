#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#define t 4
#define t2 5
int main(){
setlocale(LC_ALL, "portuguese");
	int matriz[t][t2], i, j, vetor[5], soma, y=0, qtd=0;
	
	for(i=0;i<t;i++){
		for(j=0;j<t2;j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(j=0;j<t2;j++){
		soma=0;
		for(i=0;i<t;i++){
			soma = matriz[i][j] + soma;
		}
		vetor[y] = soma;
		y++;
	}
	system("cls");
	for(i=0;i<y;i++){
		if(vetor[i]>10){
			printf("Vetor posição [%d]: %d\n", i, vetor[i]);
			qtd++;
		}
	}
	
	if(qtd==0){
		printf("Não há números no vetor maior do que 10.\n");
	}
	
}

