/*Questão 1. 
Faça um programa que leia um vetor inteiro de 6 posições, ordene o vetor em ordem crescente e conte quantos
números impares esse vetor possui. Ao final do programa deve ser exibido ao usuário o vetor ordenado
e a quantidade de ímpares. 
*/

//Legenda das váriaveis
//lauren[6] = vetor com seis posições
//c = indice do for
//l = indice do for
//dinah = contador
//normani = variavel auxiliar

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int lauren[6], c, l, dinah=0, normani;
	//Entrada de dados
	for(c=0; c<6; c++){		
		printf("Informe o elemento da posiçãozinha [%d]: ", c);
		scanf("%d", &lauren[c]);
	}
	
	//Ordenação(bubble sort)
	for(c=0; c<6; c++){
		for(l=0; l<6; l++){
			if(lauren[c]<lauren[l]){
				normani = lauren[c];
				lauren[c] = lauren[l]; 
				lauren[l] = normani;				
			}			
		}
	}
	//Saída de dados
	for(c=0; c<6; c++){		
		printf("\n[%d] = %d\n", c, lauren[c]);
	}
	
	//Números ímpares
	for(c=0; c<6; c++){		
		if(lauren[c]%2==0){			
		}else{			
			dinah++;
		}
	}
	//Saída de dados
	printf("A quantidade de ímpares no seu vetorzinho é: %d\n", dinah);
	
	system("pause");
	return 0;
}


