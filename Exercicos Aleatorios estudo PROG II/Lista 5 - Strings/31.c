#include<stdio.h>
#include<locale.h>
#include<string.h>
#define t 20
int main(){
setlocale(LC_ALL, "portuguese");
	char s1[20];
	int op, op2;
		
	do{
	
	printf("\n\t-------------------------=;=-----------------------\n");
	printf("\n\t\t\t\tMENU\n");		
	printf("\n\t-------------------------=;=-----------------------\n\n");
	printf("\t1. Ler a string S1.\n");
	printf("\t2. Imprimir o tamanho da string S1.\n");
	printf("\t3. Comparar a string S1 com outra string S2.\n");
	printf("\t4. Concatenar a S1 com a S2.\n");
	printf("\t5. Imprimir o reverso da S1.\n");
	printf("\t6. Contar quantas vezes certo caractere aparece na string S1.\n");
	printf("\t0. Sair.\n");
	printf("\n\t-------------------------=;=-----------------------\n");
	
	printf("\n\tDigite a sua opção:\n\t");
	scanf("%d", &op);
	system("cls");
	switch(op){
		case 1: do{
				printf("\n\t\tSTRING 1\n");
				printf("\tDigite sua frase:\n");
				fflush(stdin);
				gets(s1);
				fflush(stdin);
				
				printf("\tVoltar ao menu? 0 para sim, 1 para não:\n\n");
				scanf("%d", &op2);
				
				}while(op2!=0);
				
				system("cls");
				
				break;
				
		case 2: do{			
				printf("\n\tTAMANHO DA STRING 1.\n");
				printf("\tO tamanho é %d.\n\n", strlen(s1));
				
				printf("\tVoltar ao menu? 0 para sim, 1 para não:\n\n");
				scanf("%d", &op2);
				
				}while(op2!=0);
				system("cls");
				break;
	}
		
	}while(op!=0);
	
	system("pause");
	return 0;
}



