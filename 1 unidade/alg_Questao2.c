//Algoritmo: Sequ�ncia de N�meros
//Autor: Luan Silva
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

 int main(){
 setlocale(LC_ALL,"portuguese");
 
   //Variav�is
   int nd=1;
   float media, sdn=0, cont=0, aux;
     

     
    //Entrada de Dados 
    printf("Digite a quantidade de n�meros que voc� desejar: \n");
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
  	
  	//Sa�da
  	printf("A m�dia dos n�meros pares digitados �: ");
  	printf("%.1f\n",media);

   system("pause");
     return 0;
}

//nd = numeros digitados
//sdn = soma de todos os numeros  -- sdn = sdn + nd
//cont = total de numeros pares digitados -- cont = cont + 1
//media = sdn/cont
//aux = numero dividido/par
