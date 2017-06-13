/*
Autor: Rodrigo Zenteno
Descripción: El archivo cine.txt representa asientos en un cine. Si el asiento contiene un 0 está disponible, 1 en caso contrario. Encontrar la cantidad de asientos vacíos.
 */
#include <stdio.h>

void printM(char *cad, int length){
	int i;
	for(i = 0; i< length; i++){
		printf("%c ", cad[i]);
	}
	printf("\n");
}

int countM(char *cad, int length){
	int i, count = 0;	
	for(i = 0; i< length; i++){
		if(cad[i]=='0'){
			count++;
		}
	}
	return count;
}

int main(int argc, char *argv[]){
	FILE *fp;
	char c[6];	
	int total = 0;
	fp = fopen("cine.txt","r");	
	if(NULL == fp){
		printf("Error al leer el archivo\n");
		return 1;
	}
	while(EOF != fscanf(fp,"%c %c %c %c %c %c\n",&c[0],&c[1], &c[2], &c[3], &c[4], &c[5])){
		printf("%d: ",countM(c,6));
		total += countM(c,6);
		printM(c,6);		
	}	
	printf("TOTAL : %d\n",total);
	if(fclose(fp)){
		printf("Error al cerrar el archivo\n");
		return 1;
	}	
	return 0;
}