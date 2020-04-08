/*28- Usando do-while faça um programa que solicite um numero entre 
0 e 20, o programa só vai se encerrar quando o usuário digitar 13.*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int num;
	
	do{		
		printf("Informe um número entre 0 e 20: ");
		scanf("%d", &num);		
	}while(num!=13);

	system("pause");
	return 0;
}


