#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int promedio;
	printf ("Ingrese el Primer Operando:\n");
	scanf("%i",&a);
	printf ("Ingrese el Segundo Operando:\n");
	scanf("%i",&b);
	promedio=(a+b)/2;
	printf ("El promedio total es: %i\n",promedio);
	return 0;
}
