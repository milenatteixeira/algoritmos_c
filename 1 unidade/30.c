/* 30) Faça um programa que imprima a tabuada de um número N, no seguinte formato:
N x 1=
N x 2=
...
*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n, i, r;	
	printf("Insira um número inteiro de 0 a 10: ");
	scanf("%d", &n);
	system("cls");
	
	printf("Tabuada do número %d:\n", n);
		
	for(i>0; i<=10; i++){		
		r= n*i;				 
		printf("%d x %d = %d\n", n, i, r);
	}

	system("pause");
	return 0;
}

