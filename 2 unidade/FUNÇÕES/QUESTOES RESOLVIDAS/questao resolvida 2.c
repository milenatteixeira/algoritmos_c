#include<stdio.h>
#include<locale.h>
#include<string.h>


int somaNumeros(int x, int y);

int main(){
setlocale(LC_ALL, "portuguese");	
	int x, y;
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Digite outro n�mero: ");
	scanf("%d", &y);
	
	printf("A soma � igual a %d.\n", somaNumeros(x, y));
	
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

