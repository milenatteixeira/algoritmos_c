/*3. Crie um programa, usando for, que leia um numero inteiro positivo e imprima o seu fatorial.
exemplo: fatorial de 5: 5x4x3x2x1=120.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int i, num, s=1;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &num);
	
	for(i=num; i>=1; i--){
		
		s = s*i;
		
		
	}	printf("Fatorial de %d = %d\n", num, s);

	system("pause");
	return 0;
}


