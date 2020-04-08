//26-Usando comando de repetição (for) faça um programa que some todos os impares depois de um numero n digitado, até a soma atingir n². 

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n, s, i;	
	
	printf("Informe um número: ");
	scanf("%d", &n);
	
	s=0;	
	
	for(i=n; i<=n*n; i++){
		if(i%2!=0){
			s=i+s;		
		}		
	}

	printf("A soma dos impares é: %d\n", s);
				
	system("pause");
	return 0;
}