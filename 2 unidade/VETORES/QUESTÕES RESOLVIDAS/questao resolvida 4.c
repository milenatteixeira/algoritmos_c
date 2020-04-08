/*

*/

#include<stdio.h>
#include<locale.h>
#define tam 8
int main(){
setlocale(LC_ALL, "portuguese");
	int i, x=0, z=0;
	int l[tam], p[tam], n[tam];

	for(i=0; i<tam; i++){
		printf("[%d]: ", i);
		scanf("%d", &l[i]);
	}
	for(i=0; i<tam; i++){
		if(l[i]<0){
			n[x] = l[i];
			x++;
		}
		if(l[i]>0){
			p[z] = l[i];
			z++;					
		}
	}
	system("cls");
	printf("\n\t-------------------=;=------------------\n");
	printf("\n\tVetor positivo.\n");
	for(i=0; i<z; i++){
		printf("[%d]: %d\n", i, p[i]);		
	}
	
	printf("\n\t-------------------=;=------------------\n");
	printf("\n\tVetor negativo.\n");
	for(i=0; i<x; i++){
		printf("[%d]: %d\n", i, n[i]);		
	}
	printf("\n\t-------------------=;=------------------\n");

	system("pause");
	return 0;
}



