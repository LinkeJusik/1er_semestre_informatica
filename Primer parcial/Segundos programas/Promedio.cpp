/*

Autor: Gabriel Mart�nez Gonz�lez
Fecha: 24 de agosto de 2019

Objetivo: Programa para promediar cinco n�meros cualesquiera

*/

#include <stdio.h>

int main()
{
	int suma=0, cont=0, a;
	
	printf("Introduzca los n�meros que desea promediar\n");
	
	while (cont<5){
		printf("-");
		scanf(" %d", &a);
	
		suma = suma + a;
		cont++;
	}
	
	suma = suma/5;
	printf("El resultado es %d\n",suma);
	
	return 0;
}
