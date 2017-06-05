/*
Autor: Rodrigo Zenteno
Descripción: Ejemplo de escritura de una cadena de caracteres sobre un archivo (con append)
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *cadena = "Hola Mundooo";
	int i = 0;
	FILE *fp;
	if(argc > 1){
		fp = fopen(argv[1],"a");
	}else{
		fp = fopen("archivo.txt","a");
	}
	if(NULL == fp){
		printf("Error al leer el archivo\n");
		return 1;
	}
	while(i < strlen(cadena)){
		if(EOF == putc(cadena[i],fp)){
			printf("Error al escribir en archivo\n");
			return 1;
		}
		i++;
	}
	if(fclose(fp)){
		printf("Error al cerrar el archivo\n");
		return 1;
	}	
	return 0;
}