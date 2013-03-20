#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
	char caracter;
	
	fp=fopen("fichero.txt","r+");
	printf("\nIntroduce un texto al fichero: ");
	while((caracter=getchar()) != '\n')
	{
		printf("%c", fputc(caracter,fp));
	}
	fclose(fp);
	return 0;
}
