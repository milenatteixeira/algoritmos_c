/*Leia dois vetores de dez, e intercale seus elementos em um terceiro vetor de oito posições.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int v1[10], v2[10], v3[20], i, x=0; 
	
	
		printf("	Vetor A	\n");
	for(i=0; i<10; i++){
		
		printf("Digite o valor de [%d]: ", i);
		scanf("%d", &v1[i]);
	
 	}
 	
 	system("cls");
 	
 		printf("	Vetor B	\n");
	 for(i=0; i<10; i++){
		
		printf("Digite o valor de [%d]: ", i);
		scanf("%d", &v2[i]);
	
 	}
 	
 	system("cls");
 	
 	for(i=0; i<20; i++){
 		
 		v3[i]=v1[x];
 		i++;
 		v3[i]=v2[x];
 		x++;
 		
	 }
	 
	 for(i=0; i<20; i++){
 		
 		printf("v3[%d]: %d\n", i, v3[i]);
 		
	 }

	system("pause");
	return 0;
}


