/*

Autor: Gabriel Martínez González
Fecha: 21 de agosto 2019
Objetivo: Programa de ejemplo de switch con frases Godínez

*/

#include <stdio.h>

int main()
{
	int con=0, res;
	char dias[7][10]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	
	printf("Seleccione el d\241a de la semana\n");
	
	for (con=0;con<7;con++){
		printf("%d - %s\n",(con+1),dias[con]);
	}
	
	scanf("%d",&res);
	res=res-1;
	
	printf("La frase del d\241a es: ");
	
	switch(res){
		case 0:
			printf("Feliz inicio de semana");
		break;
		case 1:
			printf("El mal del puerco es intenso en mi");
		break;
		case 2:
			printf("Que bueno que ya es ombligo de semana");
		break;
		case 3:
			printf("Hoy toca juebebes");
		break;
		case 4:
			printf("¡Al fin es viernes!");
		break;
		case 5:
			printf("Saba daba");
		break;
		case 6:
			printf("Mañana de nuevo es lunes :'( ");
		break;
		default:
			printf("Opci\242n inv\238lida");
		break;
		
		
	}
	
	
	return 0;
	
}
