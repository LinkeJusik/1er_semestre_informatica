/*
Autor: Gabriel Martínez González
Fecha: 24 de septiembre de 2019
Objetivo: contar coincidencias en una cadena
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con,i=0,largo,l=0,b=0, sop;
	char cadena[50], s[50];
	
	printf("Ingrese una cadena: \n");
	gets(cadena);
	printf("Ingrese la cadena que desea comparar\n");
	gets(s);
	
	largo=strlen(cadena);
	sop=strlen(s);	
	
	for(con=0;con<largo;con++){
		if(cadena[i]==s[l]){
			l++;
			i++;
			b++;
		}else{
			i++;
		}
	}
	
	if(b==sop){
		printf("La cadena contiene tu segunda cadena");
	}else{
	printf("La cadena no está contenida");
	}

	return 0;
}
