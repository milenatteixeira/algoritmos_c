//26-Usando comando de repeti��o (for) fa�a um programa que some todos os impares depois de um numero n digitado, at� a soma atingir n�. 

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n, s, i;	
	
	printf("Informe um n�mero: ");
	scanf("%d", &n);
	
	s=0;	
	
	for(i=n; i<=n*n; i++){
		if(i%2!=0){
			s=i+s;		
		}		
	}

	printf("A soma dos impares �: %d\n", s);
				
	system("pause");
	return 0;
}