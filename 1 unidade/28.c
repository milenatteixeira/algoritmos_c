/*28- Usando do-while fa�a um programa que solicite um numero entre 
0 e 20, o programa s� vai se encerrar quando o usu�rio digitar 13.*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int num;
	
	do{		
		printf("Informe um n�mero entre 0 e 20: ");
		scanf("%d", &num);		
	}while(num!=13);

	system("pause");
	return 0;
}


