#include<stdio.h>
#include<locale.h>
#include<string.h>

int soma(int a, int b, int c);

int main(){
setlocale(LC_ALL, "portuguese");
	int a, b, c, somatorio;
	char op;
	
	do{
	printf("Digite um n�mero maior que 1:");
	scanf("%d", &a);
	printf("Digite um n�mero qualquer:");
	scanf("%d", &b);
	printf("Digite outro n�mero qualquer:");
	scanf("%d", &c);
	
	soma(a, b, c);
	somatorio = soma(a, b, c);
	printf("A soma dos n�meros inteiros divisiveis por %d entre %d e %d � %d\n", a, b, c, somatorio);
	
	printf("Continuar? (S/N):");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	
	}while(op!='n');
		
	system("pause");
	return 0;
}
int soma(int a, int b, int c){
	int i, soma=0;
	for(i=b; i<=c; i++){
		if(i%a==0){
			soma = i + soma;
		}
	}
	return soma;
}


