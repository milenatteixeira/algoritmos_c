#include<stdio.h>
#include<locale.h>
#include<string.h>
int numero(int a);
int main(){
setlocale(LC_ALL, "portuguese");
	int x;
	
	printf("Digite um n�mero:");
	scanf("%d", &x);
			
	printf("O dobro do n�mero � %d.\n", numero(x));	
	
	system("pause");
	return 0;
}
int numero(int x){
	int d;
	
	return d = (x*2);					
}


