/*
Autor: Rodrigo Zenteno
Descripción: Implementación de una función recursiva que calcula el valor del factorial de n
 */
#include <stdio.h>

double fact(int n); // Prototipo de función

int main(){
	int n = 6;
	printf("Factorial de %d es %f\n", n, fact(n));
	return 0;
}

double fact(int n){ // Implementación
	if(n <= 0){
		return 1;
	}
	return n * fact(n - 1); // Llamado recursivo
}