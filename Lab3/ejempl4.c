#include <stdio.h>

struct estructura_amigo {
char nombre[30];
char apellido[40];
char telefono[10];
int edad;
};
struct estructura_amigo amigo = {
"Juanjo",
"Lopez",
"592-0483",
30
};

int void main()
{
printf( "%s tiene ",amigo.apellido );
printf( "%i años ", amigo.edad );
printf( "y su teléfono es el %s.\n" , amigo.telefono );
}


