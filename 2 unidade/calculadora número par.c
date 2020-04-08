//Ler sete valores e mostrar quantos são pares.

#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int v[7], i, cont=0;
	
	for(i=0; i<7; i++){
		
		printf("Digite o valor de v[%d]: ", i);
		scanf("%d",&v[i]);
		
	}

	for(i=0; i<7; i++){
		
		if(v[i]%2==0){
			
			cont++;
			printf("O v[%d] é par e tem valor de = %d. \n", i, v[i]);
			
		}
		
	}

	printf("A quantidade de números pares é: %d\n", cont);
	

	system("pause");
	return 0;
}


