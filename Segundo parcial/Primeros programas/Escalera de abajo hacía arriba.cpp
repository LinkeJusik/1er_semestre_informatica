/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: Cadena en escalera al reves
**/

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int con, largo, f, i=0, j;
	char cadena[70];
	printf("Introducir frase para escalera al revez: ");
	gets(cadena);
	largo=strlen(cadena);
	printf("%d\n", largo);

	for(con=largo;con>=0;con--){	
		
		for (j=0;j<i;j++){
			printf(" ");
		}
		printf("%c\n", cadena[con]);	
		i++;
}
 
	return 0;
}

