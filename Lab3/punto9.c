#include <stdio.h>
#include <stdlib.h>

const char FILE_NAME[]="input.txt";

int main(){
	int count=0;/*number of characters seen*/
	FILE *in_file; /*input file*/

	/*character or EOF flag from input */
	int ch;
	in_file = fopen(FILE_NAME, "r");
	if(in_File==NULL){
	printf("No se puede abrir el archivo  %s \n ",FileInputName);
	exit();	
	}
	while(1){
		
		ch=fgetc(in_file);
		if(ch==EOF)
		break;
		printf("el ch es: %i \n",ch);
		++count;		
	}
	printf("Number of characters in %s is %d\n",FILE_NAME, count);
	fclose(in_file);
	return (0);
}
