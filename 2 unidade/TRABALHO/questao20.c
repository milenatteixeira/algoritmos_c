/*Agoritmo que exibe um menu com as op�oes de somar,subtrair,
e tambem de multiplicar um numero dado pelo usuario pela duas matrizes e somar,
e imprimir o resultado*/
  
#include<locale.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
int main(){
setlocale(LC_ALL,"portuguese");
int matriz[2][2],i,j,matriz2[2][2],matriz3[2][2],opcao,soma,n;

do{
printf("\n");
printf("\n1.soma de matrizes");
printf("\n2.subtra��o de matrizes");
printf("\n3.multiplica��o de um n�mero n pelas 2 matrizes e a soma delas");
printf("\n4.sair");
printf("\n");
printf("\n Escolha a op��o desejada:");
scanf("%d",&opcao);
printf("\n");

for(i=0;i<2;i++){
	for(j=0;j<2;j++){	
		printf("\n informe a primeira matriz[%d][%d]:",i,j);
		scanf("%d",&matriz[i][j]);
	   }
    }
    
	printf("\n");
    
for(i=0;i<2;i++){
	for(j=0;j<2;j++){	
		printf("\n informe a segunda matriz[%d][%d]:",i,j);
		scanf("%d",&matriz2[i][j]);
	   }
    }


if(opcao==1){
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
    matriz3[i][j]=matriz[i][j]+matriz2[i][j];
	}
  }
for(i=0;i<2;i++){
	for(j=0;j<2;j++){	
printf("\n a soma das matrizes fica assim:%d",matriz3[i][j]);
      }
   }
}


if(opcao==2){
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		matriz3[i][j]=matriz[i][j]-matriz2[i][j];
    }
  }
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
printf("\n A subtra��o de duas matrizes �:%d",matriz3[i][j]);
    }
  }
}

if(opcao==3){
	printf("\n");
	printf("\n digite o n�mero que ser� multiplicado pela matriz:");
	scanf("%d",&n);
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
       matriz3[i][j]=matriz[i][j]*n+matriz2[i][j]*n;
               }
         }
         
printf("\n");

      for(i=0;i<2;i++){
          for(j=0;j<2;j++){
              printf("\nO resultado da  procedimento das matrizes ficar� assim:%d",matriz3[i][j]);
            }
         }
     }


}while(opcao!=4);
system("pause");
return 0;
}

