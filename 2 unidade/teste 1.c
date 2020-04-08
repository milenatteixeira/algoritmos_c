#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 30
struct restaurante{
	char nome[t];
	int codigo;
	int calorias;
	char dia[t];
};
int main(){
setlocale(LC_ALL, "portuguese");
	int y, i, j, aux, aux3;
	char aux2[t], aux4[t];
	struct restaurante x[4];
	
	printf("\n\tCADASTRO DE RECEIRAS\n\n");		
	for(y=0; y<4; y++){
		printf("Nome da receita: ");
		fflush(stdin);
		gets(x[y].nome);
		fflush(stdin);
		printf("Código da receita: ");
		scanf("%d", &x[y].codigo);
		printf("Calorias: ");			
		scanf("%f", &x[y].calorias);
		printf("Dia que é servida: ");
		flush(stdin);
		gets(x[y].dia);
		fflush(stdin);				
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(strcmp(x[j].codigo, x[j+1].codigo)>0){
				aux = x[i].codigo;
				x[i].codigo = x[j].codigo;
				x[j].codigo = aux;
				aux2 = x[i].nome;
				x[i].nome = x[j].nome;
				x[j].nome = aux2;
				aux3 = x[i].calorias;
				x[i].calorias = x[j].calorias;
				x[j].calorias = aux3;
				aux4 = x[i].dia;
				x[i].dia = x[j].dia;
				x[j].dia = aux4;
			}
		}
	}
	
	for(i=0; i<4; i++){
		printf("Nome da receita: %s\n", x[i].nome);
		printf("Código da receita: %d\n", x[i].codigo);
		printf("Calorias: %.2f\n", x[i].calorias);
		printf("Dia que é servida: %s\n", x[i].dia);		
		printf("\n");
	}	
	
	
	system("pause");
	return 0;
}



