/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int i, x, d;
	float soma=1;
	
	printf("Informe um número X: ");
	scanf("%d", &x);
	
	for(i=1; i<=x; i++){
		
			d = i;
			
		soma = soma + 1/d;
		
	}
		printf("A soma é: %.2f\n", soma); 
		
	

	system("pause");
	return 0;
}


