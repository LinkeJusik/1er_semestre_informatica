/*

Autor: Equipo 5
Fecha: 11 de septiembre de 2019
Objetivo: Programa para calcular tiempo y velocidad final de un auto

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float f,d,t,a=15;
	
	printf("Introduzca la distancia recorrida por el automovil (en metros)\n");
	scanf("%f", &d);
	
	f=sqrt(2*a*d);
	
	t=f/a;
	
	printf("La velocidad final es %.3f km/h\n",f*3.6);	
	printf("El tiempo que tardo el automovil en recorrer esa distancia fue de %.3f segundos\n",t);
	printf("Vease tambien como %.3f horas\n",t/60);
	
	return 0;
}
