#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int promedio(int vector[]){
	int j;
	int count=0;
	for(j=0;j<100;j++){
		count = count + vector[j];	
	}
	count=count/100;
	return count;
}

int main(void)
{
	int numeros[100];
	int i;
	int total=0;
	srand(time(NULL));

	for(i=0;i<100;i++){	
		numeros[i]=rand()%100;
		//printf(" %i",i);
		//printf(": el número es %i\n",numeros[i]);
	}
	total=promedio(numeros);
	printf ("El promedio total es: %i\n",total);	
	return 0;
}
