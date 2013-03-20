#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	int totalmaterias;
	float nota;
	float totalponderado=0;
	float creditos;
	float countcreditos=0;
	
	int i=0;
	char materia[20];
	char *a;
	//PARA EL ENCABEZADO DE LA TABLA
	char tmateria[]="MATERIA";
	char tnota[]="NOTA";
	char tnumerodecreditos[]="NUMERO DE CREDITOS";	

	//CUANTAS MATERIAS NECESITA PARA HACER EL CALCULO
	printf("¿Cuantas materias vio en el semestre?\n");
	scanf("%i", &totalmaterias);
	char *ListaMaterias[totalmaterias];
	float ListaDeNotas[totalmaterias];
	float ListaDeCreditos[totalmaterias];
	float ListaDeValorCreditos[totalmaterias];

	//INICIA FOR PARA PEDIR LOS DATOS
	for(i=0;i<totalmaterias;i++){
		//PIDE EL NOMBRE DE LA MATERIA
		printf("Escriba el nombre de la materia %i\n",i+1);
        	gets(materia);	
		gets(materia);
        	ListaMaterias[i] = malloc(sizeof(char)*20);
		strcpy(ListaMaterias[i],materia);

		//PIDE LA NOTA OBTENIDA EN LA MATERIA
		printf("¿Cual fue la nota obtenida?\n");
		scanf("%f", &nota);
		ListaDeNotas[i]=nota;

		//PIDE LA CANTIDAD DE CREDITOS QUE TIENE
	
		printf("¿Cuantos creditos tenia?\n");
		scanf("%f", &creditos);
		ListaDeCreditos[i]=creditos;
		countcreditos=countcreditos+ListaDeCreditos[i];
	}
	
	//FOR PARA CALCULAR EL PROMEDIO PONDERADO	
	for (i = 0; i < totalmaterias; ++i){
	ListaDeValorCreditos[i]=ListaDeCreditos[i]/countcreditos;
	totalponderado=totalponderado+(ListaDeValorCreditos[i]*ListaDeNotas[i]);
	}

	//PROCESO PARA DIBUJAR LA TABLA
        printf("____________________________________________________________\n");
	//1. Encabezado
	printf("%15s%15s%30s\n",tmateria,tnota,tnumerodecreditos);
        printf("____________________________________________________________\n");
	//2. Dibuja vectores con datos
	for (i = 0; i < totalmaterias; ++i){
	a=(char *)ListaMaterias[i];
	printf("%15s%15.1f%30.0f\n", a,ListaDeNotas[i],ListaDeCreditos[i]);
	}
	//3. Muestra el promedio ponderado
        printf("____________________________________________________________\n");
	printf("EL promedio ponderado es %35.2f\n", totalponderado);
	printf("____________________________________________________________\n");
	return 0;
}
