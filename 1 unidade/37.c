/*37.	A série de RICCI é gerada da seguinte forma: 
os dois primeiros termos são fornecidos pelo usuário, 
a partir daí, os termos são gerados como a soma dos 
dois termos anteriores, ou seja, ni=ni-1+ni-2 para i=3. 
Faça um algoritmo que simule a série RICCI.
*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int numatual, proxnum, numanterior, num, i; 
	
		printf("Informe o primeiro número da série: ");
		scanf("%d", &numanterior);
		printf("Informe o segundo número da série: ");
		scanf("%d", &numatual);
		printf("Informe o total de números da série: ");
		scanf("%d", &num);
		
		for(i=0; i<=num; i++){
			proxnum = numanterior + numatual;
			
			numanterior = numatual;
			
			numatual = proxnum;
		}
		
		printf("O número atual é: %d", numatual);
	
	system("pause");
	return 0;
}

