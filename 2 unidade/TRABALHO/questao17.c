/*Algoritmo que recebe uma matriz 3x3,e depois substitua por 0 se i=j,
,e se i>j o valor vai ser substituido por 2*/
  
#include<locale.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
int main(){
setlocale(LC_ALL,"portuguese");
int i,j,matriz[3][3];

for (i=0;i<3;i++){
  for (j=0;j<3;j++){
        printf("Informe a matriz[%d][%d]:",i,j);
		scanf("%d",&matriz[i][j]);
              }
      }
    
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		if(i==j){
			matriz[i][j]=0;
		}
	}
}

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		if(i>j){
			matriz[i][j]=2;
		}
	}
}

      printf("-----------------------------\n");
      printf("\tA MATRIZ FICARÁ ASSIM:\n");
      printf("-----------------------------\n");

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%5d ",matriz[i][j]);		
	}
	printf("\n\n");
}
printf("\n\n");

}


