/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: Imprimir una cadena en forma de escalera
**/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int con, largo, f, j;
	char cadena[70];
	
	printf("Introducir frase para verse en forma de escalera: ");
	gets(cadena);
	largo=strlen(cadena);
	printf("%d\n\n", largo);

	for(con=0;con<largo;con++){	
		for (j=0;j<con;j++){
			printf(" ");
		}
		printf("%c\n", cadena[con]);	
}
 
	return 0;
}

