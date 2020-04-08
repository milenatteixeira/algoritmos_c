#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define tam 100
int main(){
setlocale(LC_ALL, "portuguese");
	int *p = (int *) malloc(sizeof(int));
	*p = 1000;
	printf("%li", *p);
	system("pause");
	return 0;
}



