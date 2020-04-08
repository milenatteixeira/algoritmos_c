/*

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int i, c, tempo;
	float Fm, Mm, Qm, contf=0, contm=0, contmeses=0;
	char s;
	
	printf("Digite o número de crianças nascidas: ");
	scanf("%d", &c);
	

	for(i=0; i<c; i++){
		
		printf("Digite o sexo da criança: ");
		fflush(stdin);
		scanf("%c", &s);
		fflush(stdin);
		
		printf("Digite o tempo de vida da criança: ");
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
	
	printf("A porcentagem de crianças do sexo feminino são: %.2f\n", Fm);
	printf("A porcentagem de crianças do sexo masculino são: %.2f\n", Mm);
	printf("A porcentagem de crianças que viveram 24 meses ou menos é: %.2f\n", Qm);
	
	system("pause");
	return 0;
}


