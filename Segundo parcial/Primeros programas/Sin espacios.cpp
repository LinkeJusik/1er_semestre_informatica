/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: imprimir cadenas sin espacios
**/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con, largo;
	char cadena[50];
	
	printf("Introduce una frase por favor: ");
	scanf("%s",cadena);
	largo=strlen(cadena);
	
	printf("%d\n",largo);
	
	for(con=0;con<largo;con++){
		printf("%c",cadena[con]);
		
	}
	
	return 0;
	
}
