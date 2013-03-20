#include <stdio.h>

char nombres[3][20]={"fulano","mengano","perano"};

int main(void)
{
	int i=0;
	char *a;
	//char (*b)[20];
	//char *b;
	//char *c;
	//a=(char *)nombres;
        //b=(char *)nombres[1];
	//c=(char *)nombres[2];
	//printf("el nombre es %s\n", a);
	//printf("el nombre es %s\n", b);
	//printf("el nombre es %s\n", c);
	//b=(char(*)[20])nombres[0];
	for (i = 0; i < 3; ++i)
	{
		a=(char *)nombres[i];
		printf("el nombre es %s\n", a);
	}
	return(0);
}
