/*

Autor: Gabriel Martínez González
Fecha: 14 de agosto de 2019

Objetivo: Programa para calcular el área de un rectangulo

*/

#include <stdio.h>

int main()
{
	int area, base, altura;
	printf("¿Cuanto mide la base de tu rectangulo en cm?\n");
	scanf("%d",&base);
	printf("¿Cuanto mide la altura de su rectangulo en cm?\n");
	scanf("%d",&altura);
	area = base * altura;
	printf("El area del rectangulo es: %d cm^2",area);
	return 0;
}
