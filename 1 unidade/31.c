/*31. Fa�a um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias.
"Infantil A = 5-7"
"Infantil B = 8-10"
"Juvenil A = 11-13"
"Juvenil B = 14-17"
"S�nior = maiores de 18 anos"
*/


#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int i;
		printf("Informe a sua idade: ");
		scanf("%d", &i);
		
		if((i>=5) && (i<=7)){
			
			printf("Voc� � nadador infantil A.");
						
		}
		if((i>=8) && (i<=10)){
			
			printf("Voc� � nadador infantil B.");
			
		}
		if((i>=11) && (i<=13)){
			
			printf("Voc� � um nadador juvenil A.");
			
		}
		if((i>=14) && (i<=17)){
			
			printf("Voc� � um nadador juvenil B.");
			
		}
		if(i>=18){
			
			printf("Voc� � um nadador senior.");
			
		}
		
	system("pause");
	return 0;
}

