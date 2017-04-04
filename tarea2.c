#include <stdio.h>

int main(){
	int n, i, result = 1, anterior = 0, aux;
	do{
		printf("Ingrese n: ");
		scanf("%d", &n);
	} while(n < 0);	
	switch(n){
		case 0: printf("0\n");
				break;
		case 1: printf("1\n");
				break;
		default: for(i=1; i < n; i++){
			aux = result;
			result += anterior;
			anterior = aux;
		}
		printf("%d\n", result);
	}	
	return 0;
}