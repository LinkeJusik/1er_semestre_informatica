/*

Autor: Gabriel Martínez González
Fecha: 16 de agosto de 2019

Objetivo: Programa para calcular el área de un hexagono

*/

#include <stdio.h>

int main()
{
	int area, lado, apotema;
	printf("¿Cuanto mide la longitud del lado de su hexagono en cm?\n");
	scanf("%d",&lado);
	printf("¿Cuanto mide la del apotema de su hexagono en cm?\n");
	scanf("%d",&apotema);
	area = (lado * 6 * apotema)/2;
	printf("El área del hexagono es: %d cm^2",area);
	return 0;
}
