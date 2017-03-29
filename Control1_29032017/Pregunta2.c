/*
	Código correcto de la pregunta 2 del Control 1

	Autor: Rodrigo Zenteno
	Fecha: 29-03-2017
	Descripción: Imprime un triángulo formaddo por el caracter #, rodeado de signos -
	-----#-----
	----###----
	---#####---
	--#######--
	-#########-
	###########
 */
#include <stdio.h>
#define N 6

int main(){
	int i = 1, j;
	while(i <= N){
		for(j = 0; j < N-i; j++){
			printf("-");
		}
		for(j = 0; j < (2*i-1); j++){
			printf("#");
		}
		for(j = 0; j < N-i; j++){
			printf("-");
		}
		printf("\n");
		i++;
	}
	return 0;
}
