/*Quest�o 3.
Fa�a um programa que leia dois vetores de inteiros de 3 posi��es, fa�a com que um terceiro vetor receba 
a soma desses dois vetores em ordem decrescente. 
*/

//Legenda das variaveis
//matty[3] = vetor com tr�s posi��es
//adam[3] = vetor com tr�s posi��es
//george[3] = vetor de soma com tr�s posi��es
//r = indice do for
//j = indice do for
//jamie = variavel auxiliar

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[3], vetor2[3], vetor3[3], i, j, auxiliar;
	//Entrada de dados
	for(i=0; i<3; i++){
		printf("Digite o vetorzinho da posi��ozinha [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<3; i++){
		printf("Digite o vetorzinho da posi��ozinha [%d]: ", i);
		scanf("%d", &vetor2[i]);
	}
	
	//Soma
	for(i=0; i<3; i++){
		vetor3[i] = vetor[i]+vetor2[i];
	}	
	
	//Ordena��o(bubble sort)
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(vetor3[i]>vetor3[j]){
				auxiliar = vetor3[i];
				vetor3[i] = vetor[j]; 
				vetor3[j] = auxiliar;				
			}			
		}
	}
	//Sa�da de dados
	for(i=0; i<3; i++){		
		printf("\n[%d] = %d\n", i, vetor3[i]);
	}
	
	system("pause");
	return 0;
}


