/*
Autor: Rodrigo Zenteno
Descripción: Implementación de una función con paso de parámetros por referencia
 */
#include <stdio.h>

int suma(int a, int *b);

void hola(){
	printf("Hola\n");
}

int main(){
	int x, sum, *p; // 'p' es un puntero
	x = 5;
	p = &x; // 'p' apunta a la dirección de memoria de x
	hola();
	printf("Mundo\n");
	printf("X %d\n", x);
	sum = suma(3,&x); 
	printf("X %d\n", x);
	(*p) = 10; // asignación de valor en 'p' que apunta a 'x'. 'x' toma el valor 10
	sum = suma(3,p);
	printf("La suma es %d\n", sum);
	printf("X %d\n", x);
	return 0;
}

int suma(int a, int *b){ // 'a' es pasado por valor y 'b' por referencia
	int res;
	(*b)++;
	a++;
	res = a + (*b);
	return res;
}