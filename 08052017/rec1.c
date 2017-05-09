/*
Autor: Rodrigo Zenteno
Descripción: Implementación de una función recursiva que imprime por pantalla los dígitos de un número entero
 */

#include <stdio.h>

void printme(int n);

int main(){
	printme(-12345678);
	return 0;
}

void printme(int n){
	if(n < 0){
		printf("-");
		n *= -1;
	}
	if(n/10){
		printme(n/10); // llamada recursiva
	}
	printf("%d",n%10);
}