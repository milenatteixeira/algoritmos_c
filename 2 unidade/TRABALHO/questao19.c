/*algoritmo que recebe uma matriz 2x2,mostra ela,calcula e mostra a sua transposta,
e depois a soma com uma segunda matriz 2x2,
e mostre o resultado em uma terceira matriz*/
#include<locale.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
int main(){
setlocale(LC_ALL,"portuguese");
int matriz[2][2],aux=0,matriz2[2][2],i,j,matriz3[2][2];

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\n informe a matriz[%d][%d]:",i,j);
		scanf("%d",&matriz[i][j]);
	}
}
      printf("----------------------\n");
      printf("MATRIZ DIGITADA:\n");
      printf("----------------------\n");
      
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
      printf("%5d ",matriz[i][j]);
  }
  printf("\n");
}
printf("\n");

for(i=0;i<2;i++){
    for(j =i+1;j<2;j++){
       if(j!=i){
       aux=matriz[i][j];
       matriz[i][j]=matriz[j][i];
       matriz[j][i]=aux;
              }
       }
       
}
      printf("----------------------\n");
      printf("MATRIZ TRANSPOSTA:\n");
      printf("----------------------\n");
      
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
            printf("%5d ",matriz[i][j]);
			}
             printf("\n\n");  
        }
    printf("\n\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("\n informe a segunda matriz para a soma:");
		scanf("%d",&matriz2[i][j]);
     }
   }
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
    matriz3[i][j]=matriz[i][j]+matriz2[i][j];
	}
  }
printf("\n\n\n\n");
      printf("----------------------\n");
      printf("MATRIZES SOMADAS:\n");
      printf("----------------------\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
            printf("%5d ",matriz3[i][j]);
			}
             printf("\n\n");  
        }
    printf("\n\n");
}

