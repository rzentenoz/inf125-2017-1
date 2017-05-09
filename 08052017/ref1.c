/*
Autor: Rodrigo Zenteno
Descripción: Implementación funciones con arreglos como argumentos
 */
#include <stdio.h>

void mult2(int vec[], int size);
void printA(int vec[], int size);

int main(){
	int a[5] = {1 , 2, 3, 4, 5};
	printA(a, 5);
	mult2(a, 5);
	printA(a, 5);
	return 0;
}

void mult2(int vec[], int size){ // Multiplica cada uno de los elementos del arreglo por 2
	int i;
	for(i = 0; i < size; i++){
		vec[i] *= 2;
	}
}

void printA(int vec[], int size){ // Imprime el contenido del arreglo
	int i;
	for(i = 0; i < size; i++){
		printf("%d ", vec[i]);
	}	
	printf("\n");
}