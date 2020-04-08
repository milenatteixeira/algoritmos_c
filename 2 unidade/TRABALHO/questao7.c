#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#define t 3
int main(){
setlocale(LC_ALL, "portuguese");
	int m[t][t], i, j, x, y, aux=0, somaLinha1, somaLinha2, somaLinha3, somaLinha4, somaColuna1, somaColuna2, somaColuna3, somaColuna4, somaTotal, somaTotal2, somaTotal3;
	int v[3];
	char op;
	
	do{
		printf("\n\t-----------------------------------------------=;=-------------------------------------------------");		
		printf("\n\tFaça um algoritmo que receba uma matriz 3x3 e ordene os números do maior para o menor, depois some \n");
		printf("\tlinha com coluna e exiba em um vetor.\n");		
		printf("\t-----------------------------------------------=;=-------------------------------------------------\n\n");				
		
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){			
		printf("[%d][%d]:", i+1, j+1);
		scanf("%d", &m[i][j]);
		}		
	}
	system("cls");
	printf("--------------------------=;=--------------------------");
	printf("\nMATRIZ DESORDENADA\n");
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("|");
			printf("%d", m[i][j]);			
		}printf("|\n");
	}
	printf("--------------------------=;=--------------------------");
	printf("\n");	
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			for(x=0; x<t; x++){
				for(y=0; y<t; y++){
					if(m[i][j]>m[x][y]){
						aux = m[i][j];
						m[i][j] = m[x][y];
						m[x][y] = aux;
						aux=0;
					}
				}
			}	
		}
	}	
	
	printf("MATRIZ ORDENADA DECRESCENTEMENTE\n");
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			printf("|");
			printf("%d", m[i][j]);			
		}printf("|\n");
	}
	printf("--------------------------=;=--------------------------\n\n");
	//Soma 1
	somaLinha1=0;
	for(i=0; i<3; i++){
		somaLinha1 = m[i][0] + somaLinha1;
	}
	somaColuna1=0;
	for(j=0; j<3; j++){
		somaColuna1 = m[0][j] + somaColuna1;
	}
	somaTotal=somaLinha1+somaColuna1;
	
	//Soma 2
	somaLinha2=0;
	for(i=0; i<3; i++){
		somaLinha2 = m[i][1] + somaLinha2;
	}
	somaColuna2=0;
	for(j=0; j<3; j++){
		somaColuna2 = m[1][j] + somaColuna2;
	}
	somaTotal2=somaLinha2+somaColuna2;
	
	//Soma 3
	somaLinha3=0;
	for(i=0; i<3; i++){
		somaLinha3 = m[i][2] + somaLinha3;
	}
	somaColuna3=0;
	for(j=0; j<3; j++){
		somaColuna3 = m[2][j] + somaColuna3;
	}
	somaTotal3=somaLinha3+somaColuna3;
	
	v[0] = somaTotal;
	v[1] = somaTotal2;
	v[2] = somaTotal3;
	
	for(i=0; i<3; i++){
		printf("Soma da linha %d com a coluna %d = %d\n", i+1, i+1, v[i]);
	}
	
	printf("\nContinuar? S/N: ");
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	system("cls");	
		
	}while(op!='n');
	
	system("pause");
	return 0;
}



