#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

void verifica(int num);

int main(){
setlocale(LC_ALL, "portuguese");
	int x;
	
	printf("digite um número: ");
	scanf("%d", &x);
	
	verifica(x);
}
void verifica(int num){
	if(num>0){
		printf("número positivo");		
	}else{
		printf("número negativo");
	}
}
