/*

Autor: Equipo 5
Fecha: 11 de septiembre de 2019
Objetivo: Programa para hacer conversiones entre escalas de temperatura

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float k,f,c;
	char m;
	
	printf("Seleccione la escala a la que está el valor que desea ingresar\n(k=Kelvin;f=Fahrenheit;c=Celsius)");
	scanf("%c",&m);
	
	switch (m){
		
		case 'k':
			printf("Ingrese el valor de sus grados Kelvin\n");
			scanf("%f",&k);
			
			c=k-273.15;
			f=(1.8*c)+32;
			
			printf("El valor en grados Celsius es %.2f\n",c);
			printf("El valor en grados Fahrenheit es %.2f\n",f);
			break;
			
		case 'f':
			printf("Ingrese el valor de sus grados Fahrenheit\n");
			scanf("%f",&f);
			
			c=(f-32)*0.555;
			k=c+273.15;
			
			printf("El valor en grados Celsius es %f\n",c);
			printf("El valor en grados Kelvin es %.2f\n",k);
			break;
		case 'c':
			printf("Ingrese el valor de sus grados Celsius\n");
			scanf("%f",&c);
			
			k=c+273.15;
			f=(1.8*c)+32;
			
			printf("El valor en grados Kelvin es %.2f\n",k);
			printf("El valor en grados Fahrenheit es %.2f\n",f);
			break;
		default:
			printf("\nNo ha ingresado una opción valida\nRevisese los ojos\nDe nada :) \n");
			break;
	}
	return 0;
}


