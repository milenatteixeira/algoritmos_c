//Victor Hugo
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int album[4], i;
	char op;
	do{
	printf("\n------------------------------------------------------=;=------------------------------------------------------\n");		
	printf("Metratic é a plataforma que determina pontos do albuns entre 0 a 100 pontos. Se o album ganhar menos de 50 a cor\n");
	printf("que ele recebera será o vermelho.\n");
	printf("Caso maior que 50 e menor que 80 será o amarelo. E caso seja maior que 80 sua cor será verde.\n");
	printf("Defina os pontos dos seguintes albuns e veja qual sua cor: \n");
	printf("1. Anti - Rihanna.\n");
	printf("2. Lemonade - B on C.\n");
	printf("3. Glory - Britney Spears.\n");
	printf("4. 7/27 - Fifth Harmony.\n");
	printf("------------------------------------------------------=;=--------------------------------------------------------\n\n");		
	printf("Dê sua nota de 0 a 100 para os álbuns.\n");
	for(i=0; i<4; i++){
		printf("%d° Album: ", i+1);
		scanf("%d", &album[i]);
	}
	printf("\n");
	printf("Nota menor que 50: Cor vermelha.\n");
	printf("Nota maior que 50 e menor que 80: Cor amarela.\n");
	printf("Nota maior que 80: Cor verde.\n");
	printf("\n");
	for(i=0; i<4; i++){
		if(album[i]<50){
			printf("\nAlbum %d (Nota %d): Cor vermelha", i+1, album[i]);
		}
		if(album[i]>=50 && album[i]<80){
			printf("\nAlbum %d (Nota %d): Cor amarela", i+1, album[i]);
		}
		if(album[i]>=80){
			printf("\nAlbum %d (Nota %d): Cor verde", i+1, album[i]);
		}		
	}
	
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");
	
	}while(op!='n');
	system("pause");
	return 0;
}



