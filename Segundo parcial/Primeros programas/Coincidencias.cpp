/*
Autor: Gabriel Martínez González
Fecha: 24 de septiembre de 2019
Objetivo: contar coinsidencias en una cadena
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con,i=0,largo,l=0;
	char cadena[50];
	char s;
	
	printf("Ingrese una cadena: \n");
	gets(cadena);
	printf("Ingrese el caracter que desea comparar\n");
	scanf("%c",&s);
	
	largo=strlen(cadena);
	
	for(con=0;con<largo;con++){
		if(cadena[i]==s){
			l++; /*contador de coincidencias*/
			i++;
		}else{
			i++;
		}
	}
	
	printf("El numero de coincidencias fue de %d",l);
	
	return 0;
}
