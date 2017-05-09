/*
Autor: Rodrigo Zenteno
Descripción: Implementación de función de intercambio
 */
#include <stdio.h>

void swap(int *a, int *b){ // Intercambia los valores de dos variables, para esto deben ser pasadas por referencia
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int main(){
	int c=5, d=4;
	printf("%d %d\n", c, d);
	swap(&c, &d);
	printf("%d %d\n", c, d);
	return 0;
}