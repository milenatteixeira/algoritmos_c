/*Crie um programa que leia duas matrizes 3x3, some as duas matrizes, e imprima as duas matrizes*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

void imprimir(int matriz[3][3]);
void lerMatriz(int matriz[3][3]);
void somaMatriz(int m1[3][3], int m2[3][3], int s[3][3]);
int somaDiagonal(int s[3][3]);

int main(){
setlocale(LC_ALL, "portuguese");
	int a[3][3], b[3][3], s[3][3];
	
	//chamada da função
	printf("\n\tMatriz A\n");
	lerMatriz(a);
	printf("\n\tMatriz B\n");
	lerMatriz(b);
	system("cls");
	printf("\n\tMatriz A\n");
	imprimir(a);
	printf("\n\tMatriz B\n");
	imprimir(b);
	printf("A soma das duas matrizes é:\n");
	somaMatriz(a, b, s);
	imprimir(s);
	printf("A soma da diagonal é: %d\n", somaDiagonal(s));
	system("pause");
	return 0;
}

void imprimir(int matriz[3][3]){
	int i, j;	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d] = %d\n", i, j, matriz[i][j]);
		}
	}
}

void lerMatriz(int matriz[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			printf("Digite o número da matriz [%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void somaMatriz(int m1[3][3], int m2[3][3], int s[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			s[i][j] = m1[i][j] + m2[i][j];
		}
	}
}
int somaDiagonal(int s[3][3]){
	int i, j, diagonal=0;
	for(i=0; i<3; i++){
		for(j=0;j<3;j++){
			if(i==j){
				diagonal = s[i][j] + diagonal;
			}
		}
	}
	return diagonal;
}

