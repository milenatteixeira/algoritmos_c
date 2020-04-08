/*Vetor que recebe as notas de um aluno,some elas,mostre a média e informe se o aluno passou ou não.
-A média é 24 pontos*/
#include<locale.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
int main(){
setlocale(LC_ALL,"portuguese");
int notas[4],notaf=0,i;
for(i=0;i<4;i++){
	printf("\n Digite a nota do aluno na %d unidade:",i+1);
	scanf("%d",&notas[i]);
}
for(i=0;i<4;i++){
	notaf=notaf+notas[i];
}
printf("\n A Média final é:%d",notaf);
if(notaf>=24){
	printf("\n O aluno está aprovado");
}else{
	printf("\n\n O aluno está Reprovado e terá que repetir o ano");
}
}


