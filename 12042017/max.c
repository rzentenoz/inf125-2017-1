/*
	Creator: Rodrigo Zenteno
	Description: Encuentra el máximo valor presente en el arreglo
 */
#include <stdio.h>

int main(){
	int a[5] = {4,0,7,9,1}, max, i;
	max = 4;
	for(i = 1; i < 5; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("maximo: %d\n", max);
	return 0;
}