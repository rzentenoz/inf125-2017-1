#include <stdio.h>

typedef struct {
	int id;
	char sexo;
	char password[10];
	float promedio;
} Registro;

int main(int argc, char *argv[]){
	FILE *fp;		
	Registro reg1;
	int n;
	fp = fopen("listado","r");
	if(NULL == fp){
		printf("Error de apertura\n");
		return 1;
	}
	fscanf(fp,"%d %c %s %d",&reg1.id, &reg1.sexo, &reg1.password, &n);		
	printf("%d %c %s %d\n",reg1.id, reg1.sexo, reg1.password, n);	
	if(fclose(fp)){
		printf("Error de cierre\n");
		return 1;
	}
	printf("\n");
	return 0;
}