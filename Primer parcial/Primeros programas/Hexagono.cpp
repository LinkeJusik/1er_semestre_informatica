/*

Autor: Gabriel Mart�nez Gonz�lez
Fecha: 16 de agosto de 2019

Objetivo: Programa para calcular el �rea de un hexagono

*/

#include <stdio.h>

int main()
{
	int area, lado, apotema;
	printf("�Cuanto mide la longitud del lado de su hexagono en cm?\n");
	scanf("%d",&lado);
	printf("�Cuanto mide la del apotema de su hexagono en cm?\n");
	scanf("%d",&apotema);
	area = (lado * 6 * apotema)/2;
	printf("El �rea del hexagono es: %d cm^2",area);
	return 0;
}
