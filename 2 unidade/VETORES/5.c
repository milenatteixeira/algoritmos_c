/*Utilizando o método do Bubble sort, ordene um vetor de forma crescente.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int v[4], i, aux, x; 

	for(i=0; i<4; i++){
		
		printf("Informe o valor de v[%d]: ", i);
		scanf("%d", &v[i]);
		
	}

	for(i=0; i<4; i++){
		for(x=0; x<=4; x++){
			
			if(v[i]<v[x]){
				aux = v[i];
				v[i] = v[x];
				v[x] = aux;
			
		}
	
			
		}
		
	}	

	for(i=0; i<4; i++){
		
		printf("\nv[%d] = %d\n", i, v[i]); 
		
		
	}

	system("pause");
	return 0;
}


