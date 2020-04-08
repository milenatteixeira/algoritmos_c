/*

*/

#include<stdio.h>
#include<locale.h>
#define tam 
#define t tam*2
int main(){
setlocale(LC_ALL, "portuguese");
	int i, aux=0, x, y=0;
	int l[tam], c[tam], d[t];

	printf("\n\tVetor A\n");
	for(i=0; i<tam; i++){
		printf("[%d]: ", i);
		scanf("%d", &l[i]);
	}	
	
	for(i=0; i<tam; i++){
		for(x=0; x<tam; x++){
			if(l[i]<l[x]){
				aux = l[i];
				l[i] = l[x];
				l[x] = aux;
			}
		}
	}
		
	printf("\n\tVetor B\n");
	for(i=0; i<tam; i++){
		printf("[%d]: ", i);
		scanf("%d", &c[i]);
	}
	
	for(i=0; i<tam; i++){
		for(x=0; x<tam; x++){
			if(c[i]<c[x]){
				aux = c[i];
				c[i] = c[x];
				c[x] = aux;
			}
		}
	}
	
	for(i=0; i<t; i++){
		d[i] = l[y];
		i++;
		d[i] = c[y];
		y++;
	}
	
	for(i=0; i<t; i++){
		for(x=0; x<t; x++){
			if(d[i]<d[x]){
				aux = d[i];
				d[i] = d[x];
				d[x] = aux;
			}
		}
	}
	
	system("cls");
	
	printf("\n\tVetor A ordenado\n");
	for(i=0; i<tam; i++){
		printf("[%d] = %d\n", i, l[i]);
	}	
	
	printf("\n\tVetor B ordenado\n");
	for(i=0; i<tam; i++){
		printf("[%d] = %d\n", i, c[i]);
	}	
	
	printf("\n\tVetor C intercalado e ordenado\n");
	for(i=0; i<t; i++){
		printf("[%d] = %d\n", i, d[i]);
	}	
	

	system("pause");
	return 0;
}



