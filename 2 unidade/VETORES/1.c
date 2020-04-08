/* 1- Faça um programa utilizando vetor que recebe três números. */

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int lauren[3];
	int i;
	
	for(i=0; i<3; i++){
		
		printf("Digite um número: ");
		scanf("%d", &lauren[i]);
				
	}
	for(i=0; i<3; i++){
			
		printf("lauren[%d] = %d\n", i, lauren[i]);
					
	}

	

	system("pause");
	return 0;
}


