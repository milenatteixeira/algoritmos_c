#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
int soma(int a, int b);
int main(){
setlocale(LC_ALL, "portuguese");
	int a, b;
	
	printf("digite o primeiro numero: ");
	scanf("%d",&a);
	printf("digite o segundo numero: ");
	scanf("%d",&b);
	
	printf("a soma é: %d",soma(a,b));
}
int soma(int a, int b){
	int soma;
	soma=a+b;
	return(soma);
}
