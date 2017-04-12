#include <stdio.h>

int main(){
	int a[5][5], i, j;	
	for(i = 0; i < 5 ; i++){
		for(j = 0; j < 5 ; j++){
			a[i][j] = i;
		}
	}
	for(j = 0; j < 5 ; j++){	
		for(i = 0; i < 5 ; i++){
			printf("%d - ", a[i][j] );
		}
		printf("\n");
	}
	
	return 0;
}