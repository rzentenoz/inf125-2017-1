/*
Autor: Rodrigo Zenteno
Descripción: Ejemplo de lectura de un archivo, imprimiendo su contenido por pantalla
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){	
	char c;
	FILE *fp;
	if(argc > 1){
		fp = fopen(argv[1],"r");
	}else{
		fp = fopen("archivo.txt","r");
	}
	if(NULL == fp){
		printf("Error al leer el archivo\n");
		return 1;
	}
	c = getc(fp);
	while(EOF != c){
		printf("%c", c);
		c = getc(fp);
	}
	if(fclose(fp)){
		printf("Error al cerrar el archivo\n");
		return 1;
	}	
	return 0;
}