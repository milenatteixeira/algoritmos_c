/*32. Faça um algoritmo que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
"Telefonou para a vítima?"
"Esteve no local do crime?"
"Mora perto da vítima?"
"Devia para a vítima?"
"Já trabalhou com a vítima?"
O algoritmo deve, no final, emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeito", entre 3 e 4 como "Cúmplice" 
e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
*/



#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int s=0, r;
	
	printf("Telefonou para a vítima? Se sim, digide 1. Se não, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;

	printf("Esteve no local do crime? Se sim, digide 1. Se não, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	printf("Mora perto da vítima? Se sim, digide 1. Se não, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	printf("Devia para a vítima? Se sim, digide 1. Se não, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	printf("Já trabalhou com a vítima? Se sim, digide 1. Se não, digite 0. ");
	scanf("%d", &r); 
	
	s=r+s;
	
	if(s==2){
		
		printf("\nVocê é suspeito do crime. \n\n");
		
	}
	
	if((s>=3) && (s<=4)){
		
		printf("\nVocê é cumplice do crime.\n\n");
		
	}
	if(s==5){
		
		printf("\nVocê é o assassino do crime.\n\n");
		
	}
	if((s==0) && (s==1)){
		
		printf("\nVocê é inocente.\n\n");
		
	}

	system("pause");
	return 0;
}

