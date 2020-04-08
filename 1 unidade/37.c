/*37.	A s�rie de RICCI � gerada da seguinte forma: 
os dois primeiros termos s�o fornecidos pelo usu�rio, 
a partir da�, os termos s�o gerados como a soma dos 
dois termos anteriores, ou seja, ni=ni-1+ni-2 para i=3. 
Fa�a um algoritmo que simule a s�rie RICCI.
*/

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int numatual, proxnum, numanterior, num, i; 
	
		printf("Informe o primeiro n�mero da s�rie: ");
		scanf("%d", &numanterior);
		printf("Informe o segundo n�mero da s�rie: ");
		scanf("%d", &numatual);
		printf("Informe o total de n�meros da s�rie: ");
		scanf("%d", &num);
		
		for(i=0; i<=num; i++){
			proxnum = numanterior + numatual;
			
			numanterior = numatual;
			
			numatual = proxnum;
		}
		
		printf("O n�mero atual �: %d", numatual);
	
	system("pause");
	return 0;
}

