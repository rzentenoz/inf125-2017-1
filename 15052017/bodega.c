/*
Autor: Rodrigo Zenteno
Descripción: Implementación de funciones para el tratamiento de arreglos de estructuras
 */
#include <stdio.h>

// Definición de estructura sin nombre pero con Alias 
typedef struct {
	int id;
	float precio;
} Articulo;

void initBodega(Articulo b[], int length); // Inicializa los valores de una bodega 
void printBodega(Articulo b[], int length); // Imprime por pantalla cada uno de los elementos
int maxPrecio(Articulo b[], int length); // Encuentra la posición en la que se encuentra el artículo con el máximo precio 

int main(){
	Articulo bodega[5];
	initBodega(bodega,5);
	printBodega(bodega,5);
	printf("El maximo esta en %d\n", maxPrecio(bodega,5));
	return 0;
}

// Implementación de función 'initBodega'
void initBodega(Articulo b[], int length){
	int i;
	for(i = 0; i < length; i++){
		b[i].id =  i; 
		b[i].precio = 130 * ((i +1) % 3);
	}
}

// Implementación de función 'printBodega'
void printBodega(Articulo b[], int length){
	int i;
	for(i = 0; i < length; i++){
		printf("Articulo %d : %f\n", b[i].id, b[i].precio);
	}
}

// Implementación de función 'maxPrecio'
int maxPrecio(Articulo b[], int length){
	int i, max = 0;
	if(length == 1){
		return max;
	}
	for(i = 1; i < length; i++){
		if(b[i].precio > b[max].precio){
			max = i;
		}
	}
	return max;
}