/*Quest�o 1. 
Fa�a um programa que leia um vetor inteiro de 6 posi��es, ordene o vetor em ordem crescente e conte quantos
n�meros impares esse vetor possui. Ao final do programa deve ser exibido ao usu�rio o vetor ordenado
e a quantidade de �mpares. 
*/

//Legenda das v�riaveis
//lauren[6] = vetor com seis posi��es
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
		printf("Informe o elemento da posi��ozinha [%d]: ", c);
		scanf("%d", &lauren[c]);
	}
	
	//Ordena��o(bubble sort)
	for(c=0; c<6; c++){
		for(l=0; l<6; l++){
			if(lauren[c]<lauren[l]){
				normani = lauren[c];
				lauren[c] = lauren[l]; 
				lauren[l] = normani;				
			}			
		}
	}
	//Sa�da de dados
	for(c=0; c<6; c++){		
		printf("\n[%d] = %d\n", c, lauren[c]);
	}
	
	//N�meros �mpares
	for(c=0; c<6; c++){		
		if(lauren[c]%2==0){			
		}else{			
			dinah++;
		}
	}
	//Sa�da de dados
	printf("A quantidade de �mpares no seu vetorzinho �: %d\n", dinah);
	
	system("pause");
	return 0;
}


