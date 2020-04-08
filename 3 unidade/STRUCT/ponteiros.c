#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
struct teste{
	int a;
	float b;
};
int main(){
setlocale(LC_ALL, "portuguese");
	struct teste *ponteiro;
	struct teste t;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &t.a);
	printf("Digite um valor float: ");
	scanf("%f", &t.b);
	
	ponteiro = &t;	
	
	
	printf("valor inteiro é: %d\n", ponteiro->a);
	printf("valor float é: %.2f\n", ponteiro->b);
	
	
	system("pause");
	return 0;
}



