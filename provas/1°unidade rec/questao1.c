/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int i, c, tempo;
	float Fm, Mm, Qm, contf=0, contm=0, contmeses=0;
	char s;
	
	printf("Digite o n�mero de crian�as nascidas: ");
	scanf("%d", &c);
	

	for(i=0; i<c; i++){
		
		printf("Digite o sexo da crian�a: ");
		fflush(stdin);
		scanf("%c", &s);
		fflush(stdin);
		
		printf("Digite o tempo de vida da crian�a: ");
		scanf("%d", &tempo);
		
		if(tempo<=24){
			
			contmeses++;
			
		}
		
		if(s=='f'){
			
			contf++;
			
		}
		if(s=='m'){
			
			contm++;
			
		}
		
		
	}
	
	Fm = (contf*100)/c;
	Mm = (contm*100)/c;
	Qm = (contmeses*100)/c;
	
	printf("A porcentagem de crian�as do sexo feminino s�o: %.2f\n", Fm);
	printf("A porcentagem de crian�as do sexo masculino s�o: %.2f\n", Mm);
	printf("A porcentagem de crian�as que viveram 24 meses ou menos �: %.2f\n", Qm);
	
	system("pause");
	return 0;
}


