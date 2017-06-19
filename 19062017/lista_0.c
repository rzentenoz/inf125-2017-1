#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;			
	fp = fopen("listado","r");
	if(NULL == fp){
		printf("Error de apertura\n");
		return 1;
	}	
	if(fclose(fp)){
		printf("Error de cierre\n");
		return 1;
	}
	printf("\n");
	return 0;
}