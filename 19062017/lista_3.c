#include <stdio.h>

typedef struct {
	int id;
	char sexo;
	char password[10];
	float promedio;
} Registro;

int main(int argc, char *argv[]){
	FILE *fp;
	float temblor;
	Registro reg1;
	int i, n;
	fp = fopen("listado","r");
	if(NULL == fp){
		printf("Error de apertura\n");
		return 1;
	}
	fscanf(fp,"%d %c %s %d",&reg1.id, &reg1.sexo, &reg1.password, &n);
	reg1.promedio = 0.0;
	for(i = 0; i < n; i++){
		fscanf(fp, "%f\n", &temblor);
		reg1.promedio += temblor;
	}
	reg1.promedio /= n;
	printf("%d %c %s %f\n",reg1.id, reg1.sexo, reg1.password, reg1.promedio);	
	
	if(fclose(fp)){
		printf("Error de cierre\n");
		return 1;
	}
	printf("\n");
	return 0;
}