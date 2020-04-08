//Algoritmo: Sequência de Números
//Autor: Luan Silva
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

 int main(){
 setlocale(LC_ALL,"portuguese");
 
   //Variavéis
   int cod, codigomaior = 0;
   float n1, n2, n3, media, maiorN1, maiorN2, maiorN3, maiormedia;
     
    //Entrada de Dados 
    printf("Para cadastrar um aluno informe o seu código ou para encerrar digite O: \n");     
    
    while(cod!=0){

    scanf("%d",&cod);
    
     if(cod!=0){
      printf("informe a primeira nota do aluno: \n");
     	scanf("%f",&n1);
     		printf("informe a segunda nota do aluno: \n");
     	scanf("%f",&n2);
     		printf("informe a terceira nota do aluno: \n");
     	scanf("%f",&n3);
     	printf("Para cadastrar um aluno informe o seu código ou para encerrar digite O: \n");
	 }
	  
     media= (n1+n2+n3)/ 3;
	 	      
        if(media>maiormedia){
      		maiormedia=media;        
          codigomaior=cod;        	
       }
    }
      printf("Aluno com maior média: %d\n",codigomaior);
      printf("Media do melhor aluno: %.2f\n",maiormedia);
      printf("\n");


      system("pause");
      return 0;
}
