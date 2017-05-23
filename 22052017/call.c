/*
Autor: Rodrigo Zenteno
Descripción: Implementación de funciones similares (f1/f2 y f3/f4) que grafican la similitud entre el paso por referencia y arreglos como parámetros
 */
#include <stdio.h>

void f1(int *a){
	(*a)++;
}

void f2(int a[]){
	(*a)++;
}

void f3(int a[], int length){
	int i;
	for(i = 0; i < length; i++){
		a[i]--;
	}
}

void f4(int *a, int length){
	int i;
	for(i = 0; i < length; i++){
		a[i]--;
	}
}

void printXY(int x, int *y, int length){
	int i;
	printf("X: %d\n",x);
	printf("Y: ");
	for(i = 0; i < length; i++){
		printf("%d ",y[i]);
	}
	printf("\n");
}

int main(){	
	int x = 3;
	int y[] = {4,5,6,7};
	printf("f1\n");
	f1(&x);
	f1(y);
	printXY(x,y,4);
	printf("f2\n");
	f2(&x);
	f2(y);
	printXY(x,y,4);
	printf("f3\n");
	f3(&x, 1);	
	f3(y, 4);
	printXY(x,y,4);
	printf("f4\n");
	f4(&x, 1);	
	f4(y, 4);
	printXY(x,y,4);
	return 0;
}