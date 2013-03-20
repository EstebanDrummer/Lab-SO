#include <stdio.h>

struct estudiante
{
	char Nombre[40];
	int numEstudiante;
	int agnoMatricula;
	float nota;
};

struct estudiante cambioDatos(struct estudiante estud1){
	printf( "Ingresa el nuevo nombre \n ");
	gets(estud1.Nombre);
	gets(estud1.Nombre);
	printf("Ingresa el numero del estudiante\n");
	scanf("%i", &estud1.numEstudiante);
	printf("Ingresa el año de matricula\n");
	scanf("%i", &estud1.agnoMatricula);	
	printf("Ingresa la nota\n");
	scanf("%f", &estud1.nota);
	return estud1;
	}

void imprimirNuevosDatos(struct estudiante estud1){
	printf("El nombre es: %s\n", estud1.Nombre);
	printf("El numero del estudiante es: %i\n", estud1.numEstudiante);
	printf("El año de matricula: %i\n", estud1.agnoMatricula);	
	printf("La nota es %.2f \n", estud1.nota);
}

int main(void){
	char cambio;
	struct estudiante estud1={"Jose", 4,2009,4.5};
	struct estudiante *ptrEstruct;
	ptrEstruct=&estud1;
	printf("El nombre es: %s\n", ptrEstruct->Nombre);
	printf("La numero del estudiante es: %i\n", ptrEstruct->numEstudiante);
	printf("El año de matricula: %i\n", ptrEstruct->agnoMatricula);	
	printf("La nota de estud1 es %.2f (Con apuntador )\n", ptrEstruct->nota);
	printf("La nota de estud1 es %.2f (sin apuntador )\n", estud1.nota);
	printf("Si desea cambiar los datos precione la tecla -r-\n");
	cambio=getchar();
	if(cambio=='r'){
		printf("se cambiará la info )\n");
		estud1=cambioDatos(estud1);
		imprimirNuevosDatos(estud1);
	}
return 0;
}
