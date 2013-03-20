#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int operacion;
	int resultado;
	printf ("Ingrese el Primer Operando:\n");
	scanf("%i",&a);
	printf ("Ingrese el Segundo Operando:\n");
	scanf("%i",&b);
	printf ("¿Qué operación desea realizar?: \n1:suma,\n2:resta,\n3:multiplicacion,\n4:division\n");
	scanf("%i",&operacion);
		switch(operacion){
			case 1 :
				resultado=a+b;
				printf("Resultado de la suma: %i\n",resultado);
				break;
			case 2 :
				resultado=a-b;
				printf("Resultado de la resta: %i\n",resultado);
				break;
			case 3 :
				resultado=a*b;
				printf("Resultado de la multiplicación: %i\n",resultado);
				break;
			case 4 :
				if(b!=0)
				{
				resultado=a/b;
				printf("Resultado de la división: %i\n",resultado);}
				break;
			default:
				printf("Esa operación no existe.. chau\n");
}
	return(0);
}
