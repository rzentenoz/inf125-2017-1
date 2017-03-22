#include <stdio.h>

int main(){
	int i, cont, sum = 0;	
	for(cont = 0;cont < 3; cont++){
		do{
			printf("Ingrese el elemento %d: ", cont+1);
			scanf("%d",&i);		
		}while(i < 0 || i > 9 || i % 2 );	
		sum += i;
	}
	printf("La sumatoria es %d\n", sum);
	return 0;
}
