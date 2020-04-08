#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define tam 100
struct n{
	float gr1, gr2, media, add;
	char name[tam];
	int mat;
};
int main (){
setlocale(LC_ALL, "portuguese");
FILE *file;
struct n mat[tam];
struct n aux;
struct n cad[tam];
char rs[tam], busca_nome[tam], esc, op, nome[tam];
int option, number, i=0, j=0, qtd=0, busca_mat, exc, cont=0, editar, y;
float stgrade, ndgrade, final, prnota, sgnota;
char *name;
	
do{	
	printf("-------------------;=;----------------------\n");
	printf("\t\t  MENU\n");
	printf("-------------------;=;----------------------\n");
	printf("\t0. Sair do programa!\n");
	printf("\t1. Mostrar todas as matriculas!.\n");
	printf("\t2. Ordenação 1: medias.\n");
	printf("\t3. Ordenação 2: nomes.\n");		
	printf("\t4. Ordenação 3: matriculas.\n");
	printf("\t5. Buscas 1: matricula.\n");
	printf("\t6. Buscas 2: nome.\n");
	printf("\t7. Cadastro de matricula.\n");
	printf("\t8. Exclusão de matricula.\n");
	printf("\t9. Editar uma matricula.\n");		
	printf("-------------------;=;----------------------\n");
	printf("\n\tDigite a sua opção: ");
	scanf("%d", &option);
	system("cls");
	switch(option){
		
		case 1: do{
				file = fopen("estrutura.txt", "r");							
					while(fgets(rs, tam, file)){											
						number = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						stgrade = atof(strtok(NULL, ";"));
						ndgrade = atof(strtok(NULL, ";"));
						final = (stgrade + ndgrade)/2;
						printf("Número da matricula: %d \n Nome do aluno: %s \n Nota 1: %.3f \n Nota 2: %.3f \n Media: %.3f\n\n", number, name, stgrade, ndgrade, final);						
					}
					cont = number;
								
				fclose(file);
				
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
								
				}while(op!='s');
				system("cls");
				break;
						
		case 2: do{
				printf("\tVocê escolheu a ordenação 1: por media!\n\n");
				file = fopen("estrutura.txt", "r");
				if(file == NULL){
					printf("Este arquivo não existe! Tente novamente.");
					break;
				}else{
				i=0;
				while(fgets(rs, tam, file)){
					mat[i].mat = atoi(strtok(rs, ";"));
					name = strtok(NULL, ";");
					mat[i].gr1 = atof(strtok(NULL, ";"));
					mat[i].gr2 = atof(strtok(NULL, ";"));
					mat[i].add = mat[i].gr1 + mat[i].gr2;
					mat[i].media = mat[i].add/2;
					strcpy(mat[i].name, name);						
					i++;						
				}
				qtd=i;
				for(i=0; i<qtd; i++){
					for(j=0; j<qtd; j++){
						if(mat[i].media>mat[j].media){
							aux.media = mat[i].media;
							mat[i].media = mat[j].media;
							mat[j].media = aux.media;
								
							aux.gr1 = mat[i].gr1;
							mat[i].gr1 = mat[j].gr1;
							mat[j].gr1 = aux.gr1;
								
							aux.gr2 = mat[i].gr2;
							mat[i].gr2 = mat[j].gr2;
							mat[j].gr2 = aux.gr2;
								
							aux.mat = mat[i].mat;
							mat[i].mat = mat[j].mat;
							mat[j].mat = aux.mat;
						
							strcpy(aux.name, mat[i].name);
							strcpy(mat[i].name, mat[j].name);
							strcpy(mat[j].name, aux.name);
						}
					}						
				}	
				for(i=0;i<qtd;i++){
					printf("Número da matricula: %d \n Nome do aluno: %s \n Nota 1: %.3f \n Nota 2: %.3f \n Media: %.3f\n\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2, mat[i].media);
				}			
				}
				printf("Você deseja sobrescrever a ordenação no arquivo original? S/N: ");
				fflush(stdin);
				scanf("%s", &esc);
				fflush(stdin);
				
				if(esc=='S'){
					file = fopen("estrutura.txt", "w");	
					for(i=0;i<qtd;i++){
						fprintf(file,"%d;%s;%.2f;%.2f\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2);						
					}printf("Arquivo copiado com sucesso!\n\n");
				}
				fclose(file);	
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				}while(op!='s');
				system("cls");		
				break;
			
		case 3: do{
				printf("\tVocê escolheu a ordenação 2: por nome!\n\n");
				file = fopen("estrutura.txt", "r");
				if(file == NULL){
					printf("Este arquivo não existe! Tente novamente.");
					break;
				}else{
					i=0;
					while(fgets(rs, tam, file)){
						mat[i].mat = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						mat[i].gr1 = atof(strtok(NULL, ";"));
						mat[i].gr2 = atof(strtok(NULL, ";"));
						mat[i].add = mat[i].gr1 + mat[i].gr2;
						mat[i].media = mat[i].add/2;
						strcpy(mat[i].name, name);						
						i++;						
					}
				qtd=i;
				
				for(i=0; i<qtd; i++){
					for(j=0; j<qtd; j++){
						if(stricmp(mat[i].name, mat[j].name)<0){
							aux.media = mat[i].media;
							mat[i].media = mat[j].media;
							mat[j].media = aux.media;
								
							aux.gr1 = mat[i].gr1;
							mat[i].gr1 = mat[j].gr1;
							mat[j].gr1 = aux.gr1;
								
							aux.gr2 = mat[i].gr2;
							mat[i].gr2 = mat[j].gr2;
							mat[j].gr2 = aux.gr2;
								
							aux.mat = mat[i].mat;
							mat[i].mat = mat[j].mat;
							mat[j].mat = aux.mat;
						
							strcpy(aux.name, mat[i].name);
							strcpy(mat[i].name, mat[j].name);
							strcpy(mat[j].name, aux.name);
						}
					}						
				}		
				for(i=0;i<qtd;i++){
					printf("Número da matricula: %d \n Nome do aluno: %s \n Nota 1: %.3f \n Nota 2: %.3f \n Media: %.3f\n\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2, mat[i].media);
				}							
				}
				printf("Você deseja sobrescrever a ordenação no arquivo original? S/N: ");
				fflush(stdin);
				scanf("%s", &esc);
				fflush(stdin);
				
				if(esc=='S'){
					file = fopen("estrutura.txt", "w");	
					for(i=0;i<qtd;i++){
						fprintf(file,"%d;%s;%.2f;%.2f\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2);						
					}printf("Arquivo copiado com sucesso!\n\n");
				}
				fclose(file);
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				}while(op!='s');
				system("cls");
				break;
				
		case 5: do{			
				printf("\tVocê escolheu a busca 1: por matricula!\n\n");
				file = fopen("estrutura.txt", "r");
				if(file == NULL){
					printf("Este arquivo não existe! Tente novamente.");
					break;
				}else{
					i=0;
					while(fgets(rs, tam, file)){
						mat[i].mat = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						mat[i].gr1 = atof(strtok(NULL, ";"));
						mat[i].gr2 = atof(strtok(NULL, ";"));
						mat[i].add = mat[i].gr1 + mat[i].gr2;
						mat[i].media = mat[i].add/2;
						strcpy(mat[i].name, name);						
						i++;						
					}
				qtd=i;
				printf("Digite abaixo o número da matricula desejada: ");
				scanf("%d", &busca_mat);			
				for(i=0; i<qtd; i++){
					if(mat[i].mat==busca_mat){
						printf("-------------------;=;----------------------");
						printf("\n\tMatricula encontrada!\n");						
						printf("Número da matricula: %d \n Nome do aluno: %s \n Nota 1: %.3f \n Nota 2: %.3f \n Media: %.3f\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2, mat[i].media);
						printf("-------------------;=;----------------------\n");
					}
				}								
				}
				fclose(file);	
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				}while(op!='s');
				system("cls");
				break;
				
		case 6: do{
				printf("\tVocê escolheu a busca 2: por nome!\n\n");
				file = fopen("estrutura.txt", "r");
				if(file == NULL){
					printf("Este arquivo não existe! Tente novamente.");
					break;
				}else{
					i=0;
					while(fgets(rs, tam, file)){
						mat[i].mat = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						mat[i].gr1 = atof(strtok(NULL, ";"));
						mat[i].gr2 = atof(strtok(NULL, ";"));
						mat[i].add = mat[i].gr1 + mat[i].gr2;
						mat[i].media = mat[i].add/2;
						strcpy(mat[i].name, name);						
						i++;						
					}
				qtd=i;
				printf("Digite abaixo o nome do aluno matriculado desejado: ");
				fflush(stdin);
				scanf("%s", &busca_nome);
				fflush(stdin); 				
				
				for(i=0; i<qtd; i++){					
					if(strcmp(busca_nome, mat[i].name)==0){
						printf("Aluno encontrado!\n\n");
						printf("Número da matricula: %d \n Nome do aluno: %s \n Nota 1: %.3f \n Nota 2: %.3f \n Media: %.3f\n\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2, mat[i].media);
					}
				}												
				}
				fclose(file);
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				}while(op!='s');
				system("cls");
				break;
				
		case 7:	printf("\tVocê escolheu cadastrar um novo aluno!\n\n");	
				file = fopen("estrutura.txt", "r");
				if(file == NULL){
					printf("Este arquivo não existe! Tente novamente.");
					break;
				}else{
					while(fgets(rs, tam, file)){						
						number = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						stgrade = atof(strtok(NULL, ";"));
						ndgrade = atof(strtok(NULL, ";"));
						final = (stgrade + ndgrade)/2;						
					}
					cont = number + 1;
				}
				fclose(file);
				file = fopen("estrutura.txt", "a");
				i=0;
				do{
					printf("\t\tDigite o nome do aluno: ");
					fflush(stdin);
					scanf("%s", &cad[i].name);
					fflush(stdin);
					printf("\t\tDigite a primeira nota: ");
					scanf("%f", &cad[i].gr1);	
					printf("\t\tDigite a segunda nota: ");
					scanf("%f", &cad[i].gr2);
					fprintf(file, "%d;%s;%4.2f;%4.2f\n", cont, cad[i].name, cad[i].gr1, cad[i].gr2);
					printf("\t\tDeseja continuar cadastrando?: ");	
					fflush(stdin);
					scanf("%s", &op);
					fflush(stdin);
					i++;
					cont++;		
				}while(op!='n');
				fclose(file);			
				system("cls");
				break;
					
		case 8: do{
				printf("\tVocê escolheu excluir uma matricula!\n\n");
				i=0;				
				file=fopen("estrutura.txt","r");
				while(fgets(rs, tam, file)){
						mat[i].mat = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						mat[i].gr1 = atof(strtok(NULL, ";"));
						mat[i].gr2 = atof(strtok(NULL, ";"));
						mat[i].add = mat[i].gr1 + mat[i].gr2;
						mat[i].media = mat[i].add/2;
						strcpy(mat[i].name, name);						
						i++;						
				}	
				fclose(file);
				qtd=i;
				file=fopen("estrutura.txt","w");					
				printf("Digite o número da matricula que deseja excluir: ");
				scanf("%d", &exc);	
				
				for(i=0; i<qtd; i++){
					if(exc!=mat[i].mat){
						fprintf(file, "%d;%s;%4.2f;%4.2f\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2);	
					}
				}							
				fclose(file);
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				system("cls");
				}while(op!='s');				
				system("cls");
				break;
				
		case 9: do{
				printf("\tVocê escolheu editar uma matricula!\n\n");
				i=0;				
				file=fopen("estrutura.txt","r");
				while(fgets(rs, tam, file)){
						mat[i].mat = atoi(strtok(rs, ";"));
						name = strtok(NULL, ";");
						mat[i].gr1 = atof(strtok(NULL, ";"));
						mat[i].gr2 = atof(strtok(NULL, ";"));
						mat[i].add = mat[i].gr1 + mat[i].gr2;
						mat[i].media = mat[i].add/2;
						strcpy(mat[i].name, name);						
						i++;						
				}	
				fclose(file);
				qtd=i;
				file=fopen("estrutura.txt","w");					
				printf("Digite o número da matricula que deseja editar: ");
				scanf("%d", &exc);	
				
				for(i=0; i<qtd; i++){
					if(exc!=mat[i].mat){
						fprintf(file, "%d;%s;%4.2f;%4.2f\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2);	
					}
				}				
				editar=exc;	
				printf("\t\tDigite o nome do aluno: ");
				fflush(stdin);
				scanf("%s", &nome);
				fflush(stdin);
				printf("\t\tDigite a primeira nota: ");
				scanf("%f", &prnota);	
				printf("\t\tDigite a segunda nota: ");
				scanf("%f", &sgnota);
				fprintf(file, "%d;%s;%4.2f;%4.2f\n", editar, nome, prnota, sgnota);				
				fclose(file);
				
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				system("cls");
				}while(op!='s');				
				system("cls");
				break;
		case 4: do{
				printf("\tVocê escolheu a ordenação 3: por matricula!\n\n");
				file = fopen("estrutura.txt", "r");
				if(file == NULL){
					printf("Este arquivo não existe! Tente novamente.");
					break;
				}else{
				i=0;
				while(fgets(rs, tam, file)){
					mat[i].mat = atoi(strtok(rs, ";"));
					name = strtok(NULL, ";");
					mat[i].gr1 = atof(strtok(NULL, ";"));
					mat[i].gr2 = atof(strtok(NULL, ";"));
					mat[i].add = mat[i].gr1 + mat[i].gr2;
					mat[i].media = mat[i].add/2;
					strcpy(mat[i].name, name);						
					i++;						
				}
				qtd=i;
				for(i=0; i<qtd; i++){
					for(j=0; j<qtd; j++){
						if(mat[i].mat<mat[j].mat){
							aux.media = mat[i].media;
							mat[i].media = mat[j].media;
							mat[j].media = aux.media;
								
							aux.gr1 = mat[i].gr1;
							mat[i].gr1 = mat[j].gr1;
							mat[j].gr1 = aux.gr1;
								
							aux.gr2 = mat[i].gr2;
							mat[i].gr2 = mat[j].gr2;
							mat[j].gr2 = aux.gr2;
								
							aux.mat = mat[i].mat;
							mat[i].mat = mat[j].mat;
							mat[j].mat = aux.mat;
						
							strcpy(aux.name, mat[i].name);
							strcpy(mat[i].name, mat[j].name);
							strcpy(mat[j].name, aux.name);
						}
					}						
				}	
				for(i=0;i<qtd;i++){
					printf("Número da matricula: %d \n Nome do aluno: %s \n Nota 1: %.3f \n Nota 2: %.3f \n Media: %.3f\n\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2, mat[i].media);
				}			
				}
				printf("Você deseja sobrescrever a ordenação no arquivo original? S/N: ");
				fflush(stdin);
				scanf("%s", &esc);
				fflush(stdin);
				
				if(esc=='S'){
					file = fopen("estrutura.txt", "w");	
					for(i=0;i<qtd;i++){
						fprintf(file,"%d;%s;%.2f;%.2f\n", mat[i].mat, mat[i].name, mat[i].gr1, mat[i].gr2);						
					}printf("Arquivo copiado com sucesso!\n\n");
				}
				fclose(file);	
				printf("Digite 's' caso queira voltar ao menu: ");
				fflush(stdin);
				scanf("%s", &op);
				fflush(stdin);
				}while(op!='s');
				system("cls");		
				break;
				

	}
	
}while(option!=0);

	system("pause");
	return 0;
}

