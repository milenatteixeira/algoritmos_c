#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	float media, num;
	int s=0, cont=1; 
	
	do{
		printf("Informe n�meros (um de cada vez): ");
		scanf("%f", &num);
		
		cont++;	
		
		s = s + num;
		
		
			
	}while(num!=-1);
		media = s/cont;
		printf("A m�dia �: %.2f\n", media);
	

	system("pause");
	return 0;
}


