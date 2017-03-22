/*
Autor: Rodrigo Zenteno
Descripción: Programa que calcula la sumatoria de 3 números, en el que cada número aceptado por entrada estandar debe ser par y estar dentro del rango 0 a 9
 */
#include <stdio.h>

int main(){
	int i, cont, sum = 0; // Declaración múltiple de variables 
	// Inicio de ciclo de 3 repeticiones
	for(cont = 0;cont < 3; cont++){
		// Inicio del ciclo de solicitud de número con restricciones de aceptación
		do{
			printf("Ingrese el elemento %d: ", cont+1);
			scanf("%d",&i);		
		}while(i < 0 || i > 9 || i % 2 );	
		// Fin del ciclo de solicitud de número con restricciones de aceptación
		sum += i; // Se añade el valor tomado desde la entrada estándar al total de la sumatoria
	}
	// Fin de ciclo de 3 repeticiones
	printf("La sumatoria es %d\n", sum);
	return 0;
}
