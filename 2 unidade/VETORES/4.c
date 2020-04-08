/*Leia um vetor A e coloque na ordem inversa em um vetor B.

*/

#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
	int a[5], b[5], i, x=0;
	
	for(i=0; i<5; i++){
		
		printf("Informe o valor de a[%d]: ", i);
		scanf("%d", &a[i]);
		
	}
	for(i=4; i>=0; i--){
		
		b[x]=a[i];
		x++;
		
	}
	
	for(i=0; i<5; i++){
		
		printf("b[%d] = %d\n", i, b[i]);
		
	}
	
	
	
	

	system("pause");
	return 0;
}


