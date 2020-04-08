#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 100
int main(){
setlocale(LC_ALL, "portuguese");
	int a[t][t], b[t][t], i, j, linhas, colunas;
	FILE *arq;
	
	arq = fopen("1.txt", "r");
	if(arq==NULL){
		printf("Erro ao abrir arquivo.\n");
	}
	
	fscanf(arq, "%d %d", &linhas, &colunas);
	
	for(i=0;i<linhas; i++){
		for(j=0;j<colunas; j++){
			fscanf(arq, "%d", &a[i][j]);
		}
	}
	for(i=0;i<linhas; i++){
		for(j=0;j<colunas; j++){
			fscanf(arq, "%d", &b[i][j]);
		}
	}
	fclose(arq);
	
	for(i=0;i<linhas; i++){
		for(j=0;j<colunas; j++){
			a[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<linhas; i++){
		for(j=0;j<colunas; j++){
			printf("|");
			printf("%d", a[i][j]);			
		}printf("|\n");
	}
	
	system("pause");
	return 0;
}



