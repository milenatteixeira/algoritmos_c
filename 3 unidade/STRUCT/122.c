#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 2
struct pessoa{
	char nome;
	int idade;
};

void leitura(struct pessoa x[t]);

int main(){
setlocale(LC_ALL, "portuguese");
	struct pessoa x[t];
	leitura(x);
}

void leitura(struct pessoa x[t]){
	int i;
	for(i=0;i<t;i++){
		printf("Nome: ");
		fflush(stdin);
		scanf("%c", &x[i].nome);
		fflush(stdin);
		printf("\nIdade: ");
		fflush(stdin);
		scanf("%d", &x[i].idade);
		fflush(stdin);
	}
}
