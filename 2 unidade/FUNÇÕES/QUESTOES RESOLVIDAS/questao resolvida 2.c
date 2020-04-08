#include<stdio.h>
#include<locale.h>
#include<string.h>


int somaNumeros(int x, int y);

int main(){
setlocale(LC_ALL, "portuguese");	
	int x, y;
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf("%d", &y);
	
	printf("A soma é igual a %d.\n", somaNumeros(x, y));
	
	system("pause");
	return 0;
}

int somaNumeros(int x, int y){
	int i, soma=0;
	for(i=x+1; i<y; i++){
		soma = i + soma;
	}	
	return soma;
}

