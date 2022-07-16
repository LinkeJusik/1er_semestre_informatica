/*

Autor: Gabriel Martínez González
Fecha: 24 de agosto de 2019

Objetivo: Programa para el menu de compuertas lógicas

*/

#include <stdio.h>

int main()
{
    char s;
    int b,c;
    
    printf("¿Cual compuerta logica desea utilizar? (a=and, o=or, r=nor, d=nand, x=xor)\n");
    scanf("%c",&s);
    
    switch (s){
    	case 'a':
    		printf("Introduzca sus dos proposiciones (0,1)\nPrimera proposicion: ");
    		scanf(" %d",&b);
			printf("Segunda proposicion: ");
			scanf("  %d",&c);
			if (b == c && b == 1){
				printf("Su resultado es 1 (verdad)\n");
			} else {
				printf("Su resultado es 0 (falso)\n");
			}
			break;
		case 'o':
    		printf("Introduzca sus dos proposiciones (0,1)\nPrimera proposicion: ");
    		scanf(" %d",&b);
			printf("Segunda proposicion: ");
			scanf("  %d",&c);
			if (b == c && b == 0){
				printf("Su resultado es 0 (falso)\n");
			} else {
				printf("Su resultado es 1 (verdad)\n");
			}
			break;
		case 'r':
    		printf("Introduzca sus dos proposiciones (0,1)\nPrimera proposicion: ");
    		scanf(" %d",&b);
			printf("Segunda proposicion: ");
			scanf("  %d",&c);
			if (b == c && b == 0){
				printf("Su resultado es 1 (verdad)\n");
			} else {
				printf("Su resultado es 0 (falso)\n");
			}
			break;
		case 'd':
    		printf("Introduzca sus dos proposiciones (0,1)\nPrimera proposicion: ");
    		scanf(" %d",&b);
			printf("Segunda proposicion: ");
			scanf("  %d",&c);
			if (b == c && b == 1){
				printf("Su resultado es 0 (falso)\n");
			} else {
				printf("Su resultado es 1 (verdad)\n");
			}
			break;
		case 'x':
    		printf("Introduzca sus dos proposiciones (0,1)\nPrimera proposicion: ");
    		scanf(" %d",&b);
			printf("Segunda proposicion: ");
			scanf("  %d",&c);
			if (b == c){
				printf("Su resultado es 0 (falso)\n");
			} else {
				printf("Su resultado es 1 (verdad)\n");
			}
			break;
			
	}
	return 0;
}
