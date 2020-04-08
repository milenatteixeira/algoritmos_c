/*
*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int hayley[7], i;
	
	for(i=0; i<7; i++){		
		printf("digite o elemento da posição[%d]: ", i);
		scanf("%d", &hayley[i]);		
	}
	
	printf("\n	Números Multiplos de 2.	\n");
	for(i=0; i<7; i++){		
		if(hayley[i]%2==0){			
			printf("posição[%d] = %d\n", i, hayley[i]);			
		}		
	}
	
	printf("\n	Números Multiplos de 3.	\n");
	for(i=0; i<7; i++){		
		if(hayley[i]%3==0){			
			printf("posição[%d] = %d\n", i, hayley[i]);			
		}		
	}
	
	printf("\n	Números Multiplos de 2 e 3.	\n");
	for(i=0; i<7; i++){		
		if((hayley[i]%2==0) && (hayley[i]%3==0)){			
			printf("posição[%d] = %d\n", i, hayley[i]);			
		}		
	}
	system("pause");
	return 0;
}
