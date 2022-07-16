/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: imprimir cadenas con letras repetidas
**/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con, largo, f;
	char cadena[50];
	printf("Introducir frase: ");
	gets(cadena);
	largo=strlen(cadena);
	printf("%d\n", largo);
	
	for(con=0; con<largo; con++){
		for(f=largo;f>0;f--){
			printf(" ");
			printf("%c\n", cadena[con]);
		}
	}
	
	return 0;
	
}
