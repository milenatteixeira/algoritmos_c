/*32. Fa�a um algoritmo que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:
"Telefonou para a v�tima?"
"Esteve no local do crime?"
"Mora perto da v�tima?"
"Devia para a v�tima?"
"J� trabalhou com a v�tima?"
O algoritmo deve, no final, emitir uma classifica��o sobre a participa��o da pessoa no crime. 
Se a pessoa responder positivamente a 2 quest�es ela deve ser classificada como "Suspeito", entre 3 e 4 como "C�mplice" 
e 5 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente".
*/



#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int s=0, r;
	
	printf("Telefonou para a v�tima? Se sim, digide 1. Se n�o, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;

	printf("Esteve no local do crime? Se sim, digide 1. Se n�o, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	printf("Mora perto da v�tima? Se sim, digide 1. Se n�o, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	printf("Devia para a v�tima? Se sim, digide 1. Se n�o, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	printf("J� trabalhou com a v�tima? Se sim, digide 1. Se n�o, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	if(s==2){
		
		printf("\nVoc� � suspeito do crime. \n\n");
		
	}
	
	if((s>=3) && (s<=4)){
		
		printf("\nVoc� � cumplice do crime.\n\n");
		
	}
	if(s==5){
		
		printf("\nVoc� � o assassino do crime.\n\n");
		
	}
	if((s==0) && (s==1)){
		
		printf("\nVoc� � inocente.\n\n");
		
	}

	system("pause");
	return 0;
}

