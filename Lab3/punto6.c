#include <stdio.h>

struct point{
	int x;
	int y;
}; 
struct rect{
	struct point pt1;
	struct point pt2;
}; 

struct point pt1={0,0
};
struct point pt2={0,0
};
struct rect rect1={{0,0},{0,0}};

int main() {
int x1=0,x2=0,y1=0,y2=0;
int resul=0;
printf( "Ingrese punto x: \n ");
scanf("%i", &x1);
pt1.x=x1;
printf( "Ingrese punto y: \n ");
scanf("%i", &y1);
pt1.y=y1;
printf( "Ingrese punto x: \n ");
scanf("%i", &x2);
pt2.x=x2;
printf( "Ingrese punto y: \n ");
scanf("%i", &y2);
pt2.y=y2;
printf( "Los puntos: %i %i %i %i \n ", x1,x2,y1,y2 );
rect1.pt1=pt1;
rect1.pt2=pt2;

resul=(rect1.pt2.x-rect1.pt1.x)*(rect1.pt2.y-rect1.pt1.y);
printf( "El area es: %i \n ", resul );

return 0;
}
