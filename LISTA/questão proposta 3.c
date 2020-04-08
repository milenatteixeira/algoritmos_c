/*

*/

#include<stdio.h>
#include<locale.h>
#define t 3
#define T 3
int main(){
setlocale(LC_ALL, "portuguese");
	int i, j, maior, menor, l1, c1, l2, c2;
	int l[t][T];

	for(i=1; i<=t; i++){
		for(j=1; j<=T; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &l[i][j]);
		}
	}	
	for(i=1; i<=t; i++){
		for(j=1; j<=T; j++){
			if(l[i][j]>maior){
				maior = l[i][j];
				l1 = i;
				c1 = j;		
			}
		}
	}
	for(i=1; i<=t; i++){
		for(j=1; j<=T; j++){
			if(l[i][j]<menor){
				menor = l[i][j];				
				l2 = i;
				c2 = j;
			}
		}
	}
	
	printf("O elemento maior é %d da posição [%d][%d].\n", maior, l1, c1);
	printf("O elemento menor é %d da posição [%d][%d].\n", menor, l2, c2);

	system("pause");
	return 0;
}



