/*Crie um programa em C que a partir de um nome digitado pelo usuario, faça algumas operaçoes.
1. contar o número de vogais
2. concatenar com a palavra Jauregui
3. inverter a palavra
4. copiar a palavra em outra variavel
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int opcao, y, i, j, cont, x, w;
	char s[20], ss[20], v[5], aux;
	
	do{		
	printf("\t\t\t---------------------=;=-----------------------\n\n");
	printf("\t\t\t---------------------MENU-----------------------\n\n");
	printf("\t\t\t---------------------=;=-----------------------\n\n");
	printf("\t\t0. Sair.\n");
	printf("\t\t1. Contar o número de vogais.\n");
	printf("\t\t2. Concatenar com outra palavra.\n");
	printf("\t\t3. Inverter a palavra.\n");
	printf("\t\t4. Copiar a palavra em outra variavel.\n");
	printf("\t\t\t---------------------=;=-----------------------\n\n");
	printf("\tDigite a sua opção: ");
	scanf("%d", &opcao);	
	
	if(opcao==0){
		break;
	}
	
	printf("\tDigite um nome qualquer: ");
	fflush(stdin);
	gets(s);
	fflush(stdin);	
	
	system("cls");
		
	switch(opcao){
		
		case 1:	printf("\tVocê escolheu contar as vogais do nome.\n\n");
				v[1] = 'a';
				v[2] = 'e';
				v[3] = 'i';
				v[4] = 'o';
				v[5] = 'u';
				
				y = strlen(s);
				
				cont=0;
				
				for(i=1; i<=y; i++){
					for(j=1; j<=5; j++){
						if(s[i]==v[j]){
							cont++;
						}
					}
				}
				
				printf("\tA quantidade de vogais no nome %s é igual a %d.\n\n", s, cont);				
				
				break; 
				
		case 2:	printf("\tVocê escolheu contatenar com outro nome.\n\n");
				printf("\tDigite o nome que você quer concatenar com a primeira: ");
				fflush(stdin);
				gets(ss);
				fflush(stdin);	
				
				printf("\n\tA palavra concatenada será %s.\n\n", strcat(s, ss));			
			
				break;
				
		case 3: printf("\tVocê escolheu inverter o nome.\n\n");				
						
    			printf("\tA string invertida é: %s\n", strrev(s)); 
    			
				break;				
				
		case 4:	printf("\tVocê escolheu copiar o nome em outra variavel.\n\n");
				printf("\tA variavel foi copiada: %s.\n", strcpy(ss, s));			
			
				break;
	}
	
	}while(opcao!=0);
	
	system("pause");
	return 0;
}



