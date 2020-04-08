#include<stdio.h>
#include<locale.h>
#include<string.h>
int seg(int segundos, int h, int m, int s, int r);

int main(){
setlocale(LC_ALL, "portuguese");
	int segundos , m, h, r, s;
	char op;	
	
	do {
		seg(segundos, h, m, s, r);		
		printf("Continuar? (S/N):");
		fflush(stdin);
		scanf("%c", &op);
		fflush(stdin);		
	}while(op=='s');	
	
	system("pause");
	return 0;
}

int seg(int segundos, int h, int m, int s, int r){
	printf("Digite uma quantidade de segundos:");
	scanf("%d", &segundos);	
	
	h = segundos / 3600;
	r = segundos - (3600*h);
	m = r / 60;
	s = r - (60*m);
	
	printf("Em %d segundos temos: %d hora(s), %d minuto(s) e %d segundo(s).\n", segundos, h, m, s);
	
	return segundos;
}


