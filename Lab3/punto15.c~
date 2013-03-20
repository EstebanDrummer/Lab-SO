#include <stdio.h>
#include <stdlib.h>

void funcionfprintf(){
	FILE *file;
	char buffer[100];
        printf("Ingrese lo que quiere agregar al documento : \n");
	scanf("%s",buffer);
	file=fopen("fprint.txt","w");
	fprintf(file,"%s", buffer);
	fclose(file);
}
void funcionfscanf(){
	FILE *file;
	char buffer[100];
	file=fopen("fprint.txt","r");
	fscanf(file,"%s", buffer);
	printf("Usted ingreso:  %s  pero no me gusto\n", buffer);
	fclose(file);
}

void funcionfgets(){
	FILE *file;
	char buffer[100];
	file=fopen("fprint.txt","r");
	if(file==NULL){
	printf("No se puede, el archivo  no existe! \n ");
	exit(8);
	}
	while(feof(file)==0){
	fgets(buffer,100,file);
	printf("ahora yo escribo esto  %s  :D\n", buffer);
	}
	fclose(file);
}

void funcionfputs(){
	FILE *file;
	char buffer[100]="Ya borre lo que escribiste\n";
	file=fopen("fprint.txt","w");
	fputs(buffer,file);
	fclose(file);
}

int main(){
	funcionfprintf();
	funcionfscanf();
	funcionfputs();
	funcionfgets();	
	return 0;
}
