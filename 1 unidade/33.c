/*33. Fa�a um algoritmo que verifique se uma letra digitada � vogal ou consoante. */

#include<stdio.h>
#include<locale.h>


int main(){
setlocale(LC_ALL, "portuguese");
	char l; 
	printf("Digite uma letra: ");
	scanf("%c", &l);
	
	if((l=='a') || (l=='e') || (l=='i') || (l=='o') || (l=='u')){
		printf("A letra � uma vogal.\n");		
	}		
	else{		
		printf("A letra � uma consoante.\n");		
	}

	system("pause");
	return 0;
}

