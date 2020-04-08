#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define t 2
int main(){
setlocale(LC_ALL, "portuguese");
	int alunos[t], disc[t], provas[t][t], i, j;
	
	for(i=0; i<t; i++){			
		printf("Digite a idade do %d° aluno: ", i+1);
		scanf("%d", &alunos[i]);			
	}
	
	for(i=0; i<t; i++){			
		printf("Digite o código da %d° disciplina: ", i+1);
		scanf("%d", &disc[i]);			
	}
	
}

