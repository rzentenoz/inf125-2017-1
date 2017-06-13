/*
Autor: Rodrigo Zenteno
Descripción: Realiza una copia de original.txt para guardarlo sobre un archivo nuevo copia.txt
 */
#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp, *fd;
	char c;
	fp = fopen("original.txt","r");
	fd = fopen("copia.txt","w");
	if(NULL == fp){
		printf("Error al leer el archivo\n");
		return 1;
	}
	c = getc(fp);
	while(EOF != c){
		if(EOF == putc(c,fd)){
			printf("Error al escribir en archivo\n");
			return 1;
		}
		c = getc(fp);
	}
	if(fclose(fp)){
		printf("Error al cerrar el archivo\n");
		return 1;
	}
	if(fclose(fd)){
		printf("Error al cerrar el archivo\n");
		return 1;
	}
	return 0;
}