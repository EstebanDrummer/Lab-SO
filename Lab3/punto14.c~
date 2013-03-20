#include <stdio.h>
#include <stdlib.h>

int main(void){

	//VARIABLES ENTRADA		
	FILE *in_File;
	char FileInputName[40];
	int ch;

	//VARIABLES DE SALIDA
	FILE *out_File;
	char FileOutputName[40];

	int count=0;	

	//INGRESA EL ARCHIVO DE ENTRADA
	printf("Ingresa el nombre del archivo fuente \n");
	gets(FileInputName);
	in_File=fopen(FileInputName,"r");
	if(in_File==NULL){
	printf("No se puede abrir el archivo %s porque no existe! \n ",FileInputName);
	exit(8);	
	}	
	
	//INGRESA EL ARCHIVO DE SALIDA	
	printf("Ingresa el nombre del archivo destino \n");
	gets(FileOutputName);
	out_File=fopen(FileOutputName,"w");

	if(out_File==NULL){
	printf("No se puede abrir el archivo %s porque no existe! \n ",FileOutputName);
	exit(8);//TENER EN CUENTA SI NO EXISTE EL ARCHIVO
	}	

	while(1){
		ch=fgetc(in_File);
		if(ch==EOF)	
		break;
		fputc(ch,out_File);
		++count;

	}
	fclose(in_File);
	fclose(out_File);
	return 0;
}
