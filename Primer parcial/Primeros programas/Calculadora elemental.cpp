/*

Autor: Gabriel Mart�nez Gonz�lez
Fecha: 19 de agosto de 2019

Objetivo: Programa para calculadora

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float d,e,f;
    char a;
    int b,c;
    
    printf("�Cual es la operaci�n que desea realizar? (+,-,*,/)\n");
    scanf("%c",&a);
    
    switch (a){
    	case '+':
    		printf("Introduzca sus dos numeros a sumar\nPrimer n�mero: ");
    		scanf(" %d",&b);
			printf("Segundo n�mero: ");
			scanf("  %d",&c);
			printf("El resultado es %d",b+c);
			break;
		case '-':
    		printf("Introduzca sus dos numeros a restar\nPrimer n�mero: ");
    		scanf(" %d",&b);
			printf("Segundo n�mero: ");
			scanf("  %d",&c);
			printf("El resultado es %d",b-c);
			break;
		case '*':
    		printf("Introduzca sus dos numeros a multiplicar\nPrimer n�mero: ");
    		scanf(" %d",&b);
			printf("Segundo n�mero: ");
			scanf("  %d",&c);
			printf("El resultado es %d",b*c);
			break;
		case '/':
    		printf("Introduzca sus dos numeros a dividir\nPrimer n�mero (el de arriba): ");
    		scanf(" %f",&d);
			printf("Segundo n�mero (el de abajo): ");
			scanf("  %f",&e);
			if (e == 0){
				printf("\nNo es posible dividir entre 0\nError\n");
			} else {
				f=d/e;
			printf("El resultado es %.2f",f);
			}
			break;
		default:
			printf("\nNo ha ingresado una opci�n valida\nRevisese los ojos\nDe nada :) \n");
			break;
	}
	return 0;
}
