/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: imprimir una cadena en vertical al reves
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
	
	printf("%d\n",largo);
	
	for(con=largo;con>=0;con--){
		printf("%c \n",cadena[con]);
		
	}
	
	return 0;
	
}
