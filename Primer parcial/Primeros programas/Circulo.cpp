/*

Autor: Gabriel Martínez González
Fecha: 14 de agosto de 2019

Objetivo: Programa para calcular el área de un circulo

*/

#include <stdio.h>

int main()
{
	float area, radio;
	char g;
	
	printf("¿Qué posees?\nr=radio\nd=diametro\n");
	scanf("%c",&g);
	
	switch (g){
		case 'r':
			printf("¿Cuanto mide el radio del circulo en cm?\n");
			scanf("%f",&radio);
			area = 3.14159 * (radio * radio);
			printf("El área del circulo es: %f cm^2", area);
			break;
		case 'd':
			printf("¿Cuanto mide el diametro del circulo en cm?\n");
			scanf("%f",&radio);
			radio=radio/2;
			area = 3.14159 * (radio * radio);
			printf("El área del circulo es: %f cm^2", area);
			break;
		default:
			printf("Bueno, ¿t\243 estas pendejo, o que, hijo?");
			break;
	}
	
	return 0;
}
