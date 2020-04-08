#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int soma(int a);

int main(){
setlocale(LC_ALL, "portuguese");
	int x;
	
	printf("digite um número: ");
	scanf("%d", &x);	
	
	printf("a soma é: %d", soma(x));
}

//função de soma
int soma(int a){
	int s=0, i;
	
	for(i=1;i<a;i++){
		s = i + s;
	}
	return s;
}
