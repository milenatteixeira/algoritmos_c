#include<stdio.h>
#include<locale.h>
#include<string.h>

void ler(int v[5]);
int main(){
setlocale(LC_ALL, "portuguese");
	int num[5];
	
	ler(num);
	
	system("pause");
	return 0;
}
void ler(int v[5]){
	int i;
	for(i=1; i<=5; i++){
		printf("Digite um número: ");
		scanf("%d", &v[i]);
	}	
}


