/*Vetor que recebe as notas de um aluno,some elas,mostre a m�dia e informe se o aluno passou ou n�o.
-A m�dia � 24 pontos*/
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
printf("\n A M�dia final �:%d",notaf);
if(notaf>=24){
	printf("\n O aluno est� aprovado");
}else{
	printf("\n\n O aluno est� Reprovado e ter� que repetir o ano");
}
}


