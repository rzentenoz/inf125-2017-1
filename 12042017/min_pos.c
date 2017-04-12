/*
	Creator: Rodrigo Zenteno
	Description: Encuentra la posición del elemento más pequeño del arreglo
 */

#include <stdio.h>

int main(){
	int a[5] = {4,0,7,9,1}, su, i;
	min = 4;
	for(i = 3; i >= 0; i--){
		if(a[min] > a[i]){
			min = i;
		}
	}
	printf("minimo: %d\n", min);
	return 0;
}