/*

Autor: Gabriel Martínez González
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
    
    printf("¿Cual es la operación que desea realizar? (+,-,*,/)\n");
    scanf("%c",&a);
    
    switch (a){
    	case '+':
    		printf("Introduzca sus dos numeros a sumar\nPrimer número: ");
    		scanf(" %d",&b);
			printf("Segundo número: ");
			scanf("  %d",&c);
			printf("El resultado es %d",b+c);
			break;
		case '-':
    		printf("Introduzca sus dos numeros a restar\nPrimer número: ");
    		scanf(" %d",&b);
			printf("Segundo número: ");
			scanf("  %d",&c);
			printf("El resultado es %d",b-c);
			break;
		case '*':
    		printf("Introduzca sus dos numeros a multiplicar\nPrimer número: ");
    		scanf(" %d",&b);
			printf("Segundo número: ");
			scanf("  %d",&c);
			printf("El resultado es %d",b*c);
			break;
		case '/':
    		printf("Introduzca sus dos numeros a dividir\nPrimer número (el de arriba): ");
    		scanf(" %f",&d);
			printf("Segundo número (el de abajo): ");
			scanf("  %f",&e);
			if (e == 0){
				printf("\nNo es posible dividir entre 0\nError\n");
			} else {
				f=d/e;
			printf("El resultado es %.2f",f);
			}
			break;
		default:
			printf("\nNo ha ingresado una opción valida\nRevisese los ojos\nDe nada :) \n");
			break;
	}
	return 0;
}
