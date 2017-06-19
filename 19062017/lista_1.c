#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;		
	char sexo, password[10];
	int id, n;
	fp = fopen("listado","r");
	if(NULL == fp){
		printf("Error de apertura\n");
		return 1;
	}
	fscanf(fp,"%d %c %s %d",&id, &sexo, password, &n);		
	printf("%d %c %s %d\n",id, sexo, password, n);	
	if(fclose(fp)){
		printf("Error de cierre\n");
		return 1;
	}
	printf("\n");
	return 0;
}