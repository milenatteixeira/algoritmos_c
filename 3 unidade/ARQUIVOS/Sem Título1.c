#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main(){
setlocale(LC_ALL, "portuguese");
	FILE *arq;
	char linha[100];
	char *result;
	int i;
	
	system("cls");
	
	arq=fopen("1.txt", "rt");
	if(arq==NULL){
		printf("\n\tProblemas na abertura do arquivo.");
		return;
	}
	
	i=1;
	
	while(!feof(arq)){
		result=fgets(linha,100,arq);
		
		if(result){
			printf("\t %s", linha);
		}
		i++;
	}
	fclose(arq);
	printf("\n\t");
	system("pause");
	return 0;
}



