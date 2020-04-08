#include<stdio.h>
#include<locale.h>
#define tam 3
#define t 30
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	FILE *arquivo;
	float nota[tam];
	float media;
	float soma=0;
	char nome[t];
	int i;
	
	arquivo = fopen("Caderneta.txt","a");
	
	fprintf(arquivo,"Caderneta\n");
	
	
	if(arquivo == NULL){
		printf("\n\tErro!");
	}else{
		for(i=0;i<tam;i++){
			printf("\n\tNota: ");
			scanf("%f",&nota[i]);
			fprintf(arquivo,"Nota :%.2f\n",nota[i]);
			soma = soma+nota[i];
		}
		
		media = soma/4;
		fprintf(arquivo,"Média: %.2f\n",media);
		printf("\n");
	}
	fclose(arquivo);
	system("pause");
	return 0;
}

