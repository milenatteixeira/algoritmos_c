/* */

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int m[3][3], i, j, op, x;
	int a[3][3], b[3][3], c[3][3], d[3][3];
	
	printf("	Menu	\n");
		
	do{
	
	printf("\n0. Sair\n");
	printf("1. Soma.\n");
	printf("2. Subtração.\n");
	printf("3. Divisão.\n");
	printf("4. Multiplicação.\n");
	
	printf("Digite uma opção: ");
	scanf("%d", &op);
	
	
	system("cls");
	
	switch(op){
		
		case 1: 
				printf("Digite um número qualquer: ");
				scanf("%d", &x);
		
		
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("Digite a matriz[%d][%d]: ", i, j);
						scanf("%d", &m[i][j]);
			
					}
				}
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						a[i][j] = m[i][j] + x;
			
					}
				}
				
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("A matriz[%d][%d] = %d\n", i, j, a[i][j]);
			
					}
				}
				
		
		break;
		case 2:	printf("Digite um número qualquer: ");
				scanf("%d", &x);
		
		
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("Digite a matriz[%d][%d]: ", i, j);
						scanf("%d", &m[i][j]);
			
					}
				}
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						b[i][j] = m[i][j] - x;
			
					}
				}
				
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("A matriz[%d][%d] = %d\n", i, j, b[i][j]);
			
					}
				}
			
		break;	
		case 3: printf("Digite um número qualquer: ");
				scanf("%d", &x);
		
		
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("Digite a matriz[%d][%d]: ", i, j);
						scanf("%d", &m[i][j]);
			
					}
				}
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						c[i][j] = m[i][j] / x;
			
					}
				}
				
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("A matriz[%d][%d] = %d\n", i, j, c[i][j]);
			
					}
				}
			
		break;		
		case 4: printf("Digite um número qualquer: ");
				scanf("%d", &x);
		
		
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("Digite a matriz[%d][%d]: ", i, j);
						scanf("%d", &m[i][j]);
			
					}
				}
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						d[i][j] = m[i][j] * x;
			
					}
				}
				
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
			
						printf("A matriz[%d][%d] = %d\n", i, j, d[i][j]);
			
					}
				}
				
		
		break;
					
		default:
			break;
		
	}
	
	
		
	}while(op!=0);
	
	
	
	


	system("pause");
	return 0;
}


