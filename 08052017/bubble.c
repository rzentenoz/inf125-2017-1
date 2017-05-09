/*
Autor: Rodrigo Zenteno
Descripción: Implementación de función de ordenamiento 'Bubble Sort'
 */
#include <stdio.h>

void swap(int *a, int *b){ // Intercambia los valores de dos variables, por lo que deben ser pasados por referencia.
	int temp = *a;
	*a = *b;
	*b = temp;	
}

void bubble(int a[], int length){ // Ordena un arreglo de menor a mayor con 'Bubble Sort'
	int change = 1, i;
	while(change){
		change = 0;
		for(i = 1; i < length; i++){
			if(a[i] < a[i-1]){
				swap(&a[i], &a[i-1]);
				change = 1;
			}
		}
	}
}

void print_arr(int a[], int length){ // Imprime un arreglo
	int i;
	for(i = 0; i < length; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(){
	int arreglo[5] = { 3, 4, 1, 8, 2}; // Inicialización de un arreglo de enteros
	print_arr(arreglo, 5);
	bubble(arreglo, 5);	
	print_arr(arreglo, 5);
	return 0;
}