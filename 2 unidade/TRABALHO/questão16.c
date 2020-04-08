/*algoritmo que imprimi a soma dos números da diagonal principal e 
e os da diagonal secundaria de uma matriz 3x3*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
       int Matriz[3][3],soma,somadasec;
       int i,j;
       
       for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                  printf("Informe a matriz[%d][%d]:",i,j);
                 scanf("%d",&Matriz[i][j]);
              }
      }
      
      
      printf("----------------------\n");
      printf("Matriz Digitada:\n");
      printf("----------------------\n");
                  
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                  printf("%5d ",Matriz[i][j]);
              }
              printf("\n\n");
      }
    printf("\n\n");  
    
         printf("-----------------------------\n");
      printf("SOMA DA DIAGONAL PRINCIPAL:\n");
      printf("-----------------------------\n");

        for (i=0;i<3;i++){      
            for (j=0;j<3;j++){
				       soma=Matriz[0][0]+Matriz[1][1]+Matriz[2][2];                 
                   }
         }
    printf("%d ",soma);
    
      printf("\n\n");
      printf("-----------------------------\n");
      printf("SOMA DA DIAGONAL SECUNDARIA:\n");
      printf("-----------------------------\n");

        for (i=0; i<3;i++){      
            for (j=0; j<3;j++){                 
                       somadasec=Matriz[0][2]+Matriz[1][1]+Matriz[2][0];
                   }
             }
      printf("%d ",somadasec);
      printf("\n\n");
      
}
          
