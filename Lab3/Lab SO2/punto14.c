#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char *buffer[5];
	char *string1 ="Hola ";
	buffer[0] = malloc(sizeof(char)*30);
	strcpy(buffer[0],string1);
	strcat(buffer[0], "Mundo.");
	puts(buffer[0]);
	free(buffer[0]);
	return 0;
}

