//Fa�a um programa que receba um vetor inteiro de 10 posi��es e substitua os pares pelo n�mero 0 e os �mpares pelo n�mero 1, exibindo o vetor antes da modifica��o e depois como resultado.
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int v[10], i, cont;
	char op;
	
	do{
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFa�a um programa que receba um vetor inteiro de 10 posi��es e substitua os pares pelo n�mero 0\n");
		printf("\tos �mpares pelo n�mero 1, e tamb�m diga a quantidade de n�meros 1 existentes no vetor, exibindo-o\n");		
		printf("\t antes da modifica��o e depois como resultado.\n");
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");		
		
		for(i=0; i<10; i++){
		printf("[%d]:", i);
		scanf("%d", &v[i]);		
	}
	system("cls");
	printf("\n\tVETOR NORMAL\n");
	
	for(i=0; i<10; i++){
		printf("[%d]: %d\n", i, v[i]);
	}	
	cont=0;
	for(i=0; i<10; i++){
		if(v[i]%2==0){			
			v[i] = 0;
		}else{
			cont++;
			v[i] = 1;
		}
	}
				
	printf("\n\tVETOR MODIFICADO\n");
	for(i=0; i<10; i++){
		printf("[%d]: %d\n", i, v[i]);
	}
	printf("A quantidade de n�mero 1 no vetor � igual a %d.\n", cont);
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");	
	
	}while(op!='n');
	
	system("pause");
	return 0;
}



