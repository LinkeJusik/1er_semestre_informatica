#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
	double param, result;
	printf("Introduce un número en angulos: \n");
	scanf("%lf", &param);
	result = cos(param*PI/180); //tan //sin //cos
	printf("Resultado es: %.6lf \n",result);
	return 0;
}
