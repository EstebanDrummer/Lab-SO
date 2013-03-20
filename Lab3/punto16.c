#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

	//VARIABLES PARA HACER CALCULOS
	//int totalmaterias;
	int i=0;
	int j=0;
	int c=0;
	char *a;
	//Datos para archivo fuente
	FILE *in_File;
	char FileInputName[40];
	int ch;	
	int count=0;	
	float countcreditos=0;
	float totalponderado=0;

	//BUFFER PARA ALMACENAR LOS DATOS:
	char buffer[100];
	float bufferfloat[100];
	//int bufferint[100];
	//CUANTAS MATERIAS NECESITA PARA HACER EL CALCULO
	char *ListaMaterias[100];
	float ListaDeNotas[100];	
	float ListaDeCreditos[100];
	float ListaDeValorCreditos[100];

	//INGRESA EL ARCHIVO DE ENTRADA
	printf("Ingresa el nombre del archivo fuente \n");
	gets(FileInputName);
	in_File=fopen(FileInputName,"r");
	if(in_File==NULL){
	printf("No se puede abrir el archivo %s porque no existe! \n ",FileInputName);
	exit(8);	
	}	
	
	//accede al archivo
	while(1){
		ch=fgetc(in_File);
		if(ch==EOF)	
		break;
		//buffer[0] = malloc(sizeof(char)*30);
		if(ch==58){
			while(ch!=10){
			printf("%c",ch);
			//printf("%i",c);
			switch(c){
				case 0:
					fscanf(in_File,"%s",buffer);			
        				ListaMaterias[i] = malloc(sizeof(char)*20);
					strcpy(ListaMaterias[i],buffer);
					printf("%s",buffer);
					c=1;					
					break;
				case 1:
					fscanf(in_File,"%f",bufferfloat);	
					ListaDeNotas[i]=*bufferfloat;	
					printf("%f",*bufferfloat);
					c=2;
					break;
				case 2:
					fscanf(in_File,"%f",bufferfloat);	
					ListaDeCreditos[i]=*bufferfloat;	
					printf("%f",*bufferfloat);
					countcreditos=countcreditos+ListaDeCreditos[i];	
					c=0;
					i++;
					break;
				}
				ch=fgetc(in_File);
				++count;
				if(ch==EOF)	
				break;
		}
	}
		printf("%c",ch);
		++count;
	}
	fclose(in_File);
	
	for (j = 0; j < i; ++j){
	a=(char *)ListaMaterias[j];
	printf("%15s%15.1f%30.0f\n",a,ListaDeNotas[j],ListaDeCreditos[j]);}
	for (j = 0; j < i; ++j){
	ListaDeValorCreditos[j]=ListaDeCreditos[j]/countcreditos;
	totalponderado=totalponderado+(ListaDeValorCreditos[j]*ListaDeNotas[j]);
	//printf("EL promedio ponderado es %35.2f\n", totalponderado);
	}
	printf("EL promedio ponderado es %35.2f\n", totalponderado);

/*

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
	printf("____________________________________________________________\n");*/
	return 0;
}
