/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int a[10], b[10], c[10], i, x=0, y=0, z=0, w=0;
	
	for(i=0; i<10; i++){
		printf("[%d]: ", i);
		scanf("%d", &a[i]);
	}
	system("cls");
	
	printf("\n\t VETOR PRINCIPAL\n");
	for(i=0; i<10; i++){
		printf("[%d] = %d\n", i, a[i]);		
	}
	
	for(i=0; i<10; i++){
		if(a[i]%2==0){
			x++;
			b[z] = a[i];
			z++;
		}
	}
	for(i=0; i<10; i++){
		if(a[i]%2!=0){
			y++;
			c[w] = a[i];
			w++;
		}
	}
	printf("\n\t VETOR PAR\n");
	for(i=0; i<x; i++){
		printf("[%d] = %d\n", i, b[i]);
	}
	printf("\n\t VETOR ÍMPAR\n");
	for(i=0; i<w; i++){
		printf("[%d] = %d\n", i, c[i]);
	}
	
	
	
	system("pause");
	return 0;
}


