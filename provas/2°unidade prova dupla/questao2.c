/*Questão 2.
Faça um programa que crie 3 vetores de caracteres de 5 posições, leia um vetor
inicial de 5 posições, e separe as vogais em um vetor de vogais 
e as consoantes em vetor de consoantes. Ao final deve ser exibido os três 
vetores ao usuario.
*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	char pitty[5], emmily[5], cris[5], g[5];
	int  d, m, p=0, l=0; 
	
	for(d=0; d<5; d++){
		printf("Digite a letrinha da posiçãozinha [%d]: ", d);
		fflush(stdin);
		scanf("%c", &pitty[d]);
		fflush(stdin);
	}
	for(d=0; d<5; d++){
		printf("Digite as vogais do alfabeto: ");
		fflush(stdin);
		scanf("%c", &g[d]);
		fflush(stdin);
	}
	
	for(d=0; d<5; d++){
		for(m=0; m<5; m++){
			if(pitty[d] == g[m]){
				emmily[p] = pitty[d];
				p++;
			}
			if(pitty[d]!=g[m]){
				cris[p] = pitty[d];							
			}			
		}	
	}
		
	system("cls");
	
	printf("\n		Primeiro Vetor	\n");
	for(d=0; d<5; d++){
		printf("\n[%d] = %c\n", d, pitty[d]);
	}	
	printf("\n		Vogais	\n");
	for(d=0; d<p; d++){
		printf("\n[%d] = %c\n", d, emmily[d]);
	}
	printf("\n		Consoantes	\n");
	for(d=0; d<5; d++){
		printf("\n[%d] = %c\n", d, cris[d]);
	}
	
	system("pause");
	return 0;
}


