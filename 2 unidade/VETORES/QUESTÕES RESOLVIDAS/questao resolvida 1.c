/*

*/

#include<stdio.h>
#include<locale.h>
#define tam 9
int main(){
setlocale(LC_ALL, "portuguese");
	int y, x, i, z=1, cont=0;
	int l[tam];

	for(i=1; i<=tam; i++){
		printf("[%d]: ", i);
		scanf("%d", &l[i]);
	}
	
	system("cls");
			
	for(x=1; x<=tam; x++){
		y=0;
		for(i=1; i<=l[x]; i++){
			if(l[x]%i==0){
				y++; 
			}			
		}
		if(y==2){
			cont++;
			printf("O n�mero %d da posi��o [%d] � primo. \n", l[x], x);			
		}
	}
	printf("A quandidade de primos � %d.\n", cont);
	
	system("pause");
	return 0;
}



