/*

Autor: Gabriel Martínez González
Fecha: 19 de agosto de 2019

Objetivo: Programa para calcular el área de un hexagono

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14159265

int main()
{
	float e,p;
    char a,c,q,t;
    int b;
    
    printf("Seleccione figura de la que desea calcular el perimetro (letra)\nt=triangulo equilatero / q=cuadrado / c=circulo\n");
    scanf("%c",&a);
    
    switch (a){
    	case 't':
    		printf("Introduzca la longitud del lado del triangulo (en cm): ");
    		scanf(" %d",&b);
			printf("El perimetro es de %d cm",b*3);
			break;
		case 'q':
    		printf("Introduzca la longitud del lado del caudrado (en cm): ");
    		scanf(" %d",&b);
			printf("El perimetro es de %d cm",b*4);
			break;
		case 'c':
    		printf("Introduzca la longitud del radio del circulo (en cm): ");
    		scanf(" %f",&e);
    		p=2*e*PI;
			printf("El perimetro es de %.3f cm",p);
			break;
		default:
			printf("\nUsted ha ingresado una opción invalida\nVuelva a intentarlo en 20 minutos\n");
	}
	return 0;
}
