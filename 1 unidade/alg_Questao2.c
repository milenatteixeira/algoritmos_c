//Algoritmo: Sequência de Números
//Autor: Luan Silva
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

 int main(){
 setlocale(LC_ALL,"portuguese");
 
   //Variavéis
   int nd=1;
   float media, sdn=0, cont=0, aux;
     

     
    //Entrada de Dados 
    printf("Digite a quantidade de números que você desejar: \n");
    while(nd!=0){
    
    	
    scanf("%d",&nd);
    
	//Processamento   	 
       	   aux = (nd%2);
     if(nd!=0){
       if(aux==0){
       	  sdn = sdn + nd;
       	  cont = cont + 1;
       	
       }
     }
      media = sdn/cont;
	}
  	
  	//Saída
  	printf("A média dos números pares digitados é: ");
  	printf("%.1f\n",media);

   system("pause");
     return 0;
}

//nd = numeros digitados
//sdn = soma de todos os numeros  -- sdn = sdn + nd
//cont = total de numeros pares digitados -- cont = cont + 1
//media = sdn/cont
//aux = numero dividido/par
