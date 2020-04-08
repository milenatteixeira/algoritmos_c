#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>
#define tam 3

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int inteiro[tam];
	float flutuante[tam];
	char caracter[tam],aux=0;
	double dflutuante[tam];
	int i,j, primos[tam], cont=0, a=0;
	
	for(i=0;i<tam;i++){		
		printf("\nDigite o valor do vetor inteiro: ");
		scanf("%d",&inteiro[i]);
			
		a = inteiro[i];
		
		while(inteiro[i]!=0){
			if(inteiro[i]%a==0){
				cont++;	
				a--;
				primos[cont]=inteiro[i];
			}
		}
								
	}
	
	for(i=0;i<tam;i++){	
		printf("\nDigite o valor do vetor flutuante: ");
		scanf("%f",&flutuante[i]);						
	}
	
	for(i=0;i<tam;i++){		
		printf("\nDigite o valor do vetor dflutuante: ");
		scanf("%lf",&dflutuante[i]);					
	}
		for(i=0;i<tam;i++){			
		fflush(stdin);
		printf("\nDigite o valor do caracter: ");
		scanf("%c",&caracter[i]);
		fflush(stdin);					
	}	
	
	printf("\n---Inteiro---\n");
	printf("[ ");
	for(i=0;i<tam;i++){
		if(cont==2){
			primos[cont];
		}
		
		printf("%d ",inteiro[i]);
		printf("%d ",primos[i]);
	}
	printf("] ");
	
	printf("\n---Flutuante---\n");
	printf("[ ");
	for(i=0;i<tam;i++){
		printf("%2.f ",flutuante[i]);
	}
	printf("] ");
		
		printf("\n---Double---\n");
	printf("[ ");
	for(i=0;i<tam;i++){
		printf("%2.lf ",dflutuante[i]);
	}
	printf("] ");
	
	printf("\n---Caracter---\n");
	printf("[ ");
	for(i=0;i<tam;i++){
		printf("%c ",caracter[i]);
	}
	
	//bluble sort char
	for(i=0;i<tam;i++){
		for(j=i+1;j<tam;j++){
			if(caracter[i]>caracter[j]){
				aux = caracter[i];
				caracter[i] = caracter [j];
				caracter[j] = aux;
								
			}
			
		}
	}
	
	printf("\n---Caracter em ordem crescente---\n");
	printf("[ ");
	for(i=0;i<tam;i++){
		printf("%c ",caracter[i]);
	}
	
	printf("] ");
	system("pause");
	return 0;
}
