/*
	Creator: Rodrigo Zenteno
	Description: Calcula el producto punto entre los vectores a y b
 */
#include <stdio.h>

int main(){
	int a[5] = {4,0,7,9,1}, b[5] = {6,3,0,1,2}, sum = 0, i;	
	for(i = 0; i < 5; i++){
		sum += a[i] * b[i];
	}
	printf("producto: %d\n", sum);
	return 0;
}