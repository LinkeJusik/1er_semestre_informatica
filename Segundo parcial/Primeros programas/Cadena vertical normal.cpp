/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: imprimir cadena en vertical
**/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con, largo;
	char cadena[50];
	
	printf("Introduce una frase por favor: ");
	gets(cadena);
	largo=strlen(cadena);
	
	printf("%d\n\n",largo);
	
	for(con=0;con<largo;con++){
		printf("%c \n",cadena[con]);
		
	}
	
	return 0;
	
}
