#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");	
	int v[2], a[2], aux, i;
	char op;
	
	do{
	printf("\nO Single da Lady Gaga - Perfect Ilusion foi lançado, o seu desempenho na VEVO é de 30 mil exibições por hora.\n");
	printf("Já o da Katia é de 90 mil. Defina quantas horas se passaram em cada videoclipe. \n");
	printf("\n1. VideoClipe da Lady Gaga.");
	printf("\n2.VideoClipe da Katia.\n");
	
	for(i=0; i<2; i++){		
		printf("\n%d.: ", i+1);
		scanf("%d",&v[i]);
	}
	for(i=0; i<2; i++){
		if(i==0){
			a[0] = v[i] * 90;
		}else if(i==1){
			a[1] = v[i] * 30;
		}
	}
	for(i=0; i<2; i++){		
		printf("\nClipe da %d com %dk de visualizações: ", i+1, a[i]);
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



