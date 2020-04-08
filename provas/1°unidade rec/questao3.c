/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int idade, peso, menor, i, cont1=0, cont2=0;
	float soma=0, media;
	
	for(i=0; i<5; i++){
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		printf("Digite o peso: ");
		scanf("%d", &peso);
		
		
		
		if(peso>70){
			
			cont2++;			
		}
		
		cont1++;
		
		soma = soma + idade;
		
		if(cont1==1){
			
			menor = idade; 
			
		}
		
		if(idade<menor){
			
			menor = idade;
		}
		
		 						
	}
	media = soma/5; 
	printf("A media é: %.2f\n", media);
	printf("A idade do mais jovem é: %d\n", menor);
	printf("A quantidade de pessoas com mais de 70kg é: %d\n", cont2);	

	system("pause");
	return 0;
}


