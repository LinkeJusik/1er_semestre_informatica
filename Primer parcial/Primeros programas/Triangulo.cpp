/*

Autor: Gabriel Mart�nez Gonz�lez
Fecha: 14 de agosto de 2019

Objetivo: Programa para calcular el �rea de un triangulo

*/

#include <stdio.h>

int main()
{
	int area, base, altura;
	printf("�Cuanto mide la base del triangulo en cm?\n");
	scanf("%d",&base);
	printf("�Cuanto mide la altura de su triangulo en cm?\n");
	scanf("%d",&altura);
	area = (base * altura)/2;
	printf("El �rea del triangulo es: %d cm^2",area);
	return 0;
}
