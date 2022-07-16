/*

Autor: Gabriel Martínez González
Fecha: 14 de agosto de 2019

Objetivo: Programa para calcular el área de un hexagono

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
	double area, lado, apotema, t;
	printf("¿Cuanto mide la longitud del lado de su hexagono en cm?\n");
	("%lf", &lado); 
	area = (lado * 6 * lado / 2 * ( tan(0.523598779)/2;
	printf("El área del hexagono es: %d cm^2",area);
	return 0;
}
