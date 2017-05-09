/*
Autor: Rodrigo Zenteno
Descripción: Modificación del valor numérico de un char para convertirlo a mayúscula
 */
#include <stdio.h>

int main(){
	char a = 'a';
	printf("%c - %d\n",a, a);
	a -= 32;
	printf("%c - %d\n",a, a);
	return 0;
}