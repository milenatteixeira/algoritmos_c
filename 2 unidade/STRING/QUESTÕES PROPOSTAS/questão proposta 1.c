/*

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
setlocale(LC_ALL, "portuguese");
	char frase[100], vogal[5];
	int i, j, v=0, c=0, qtd;
	
	vogal[1] = 'a';
	vogal[2] = 'e';
	vogal[3] = 'i';
	vogal[4] = 'o';
	vogal[5] = 'u';
	
	printf("Digite uma frase:\n");
	fflush(stdin);
	gets(frase);
	fflush(stdin);
	
	qtd = strlen(frase);
	
	for(i=1; i<=qtd; i++){
		for(j=1; j<=5; j++){
			if(frase[i]==vogal[j]){
				v++;
			}
		}
	}
		
	printf("A frase é: %s\n", frase);
	printf("A quantidade de letras é: %d\n", qtd);
	printf("A quantidade de vogais é: %d\n", v);	
	
	system("pause");
	return 0;
}



