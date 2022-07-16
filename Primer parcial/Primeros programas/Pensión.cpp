/*
Autor: Gabriel Martínez González
Fecha: 16 de agosto 2019
Objetivo: Programa para definir si una persona es apta para obtener la "pensión de adultos mayores"
*/

#include <stdio.h>
int main()
{

	char res;
	printf("¿Usted tiene 65 años o más? (s/n)\n");
	scanf("%c",&res);
	if(res != 's'){
		apto = 1;
	} else {
		printf("¿Usted es mexicano? (s/n)\n");
		scanf(" %c",&res);
		if(res != 's'){
			apto = 1;
		}
	}
	if(apto == 1){
		printf("Usted NO es apto para recibir la pensión");
	} else {
		printf ("Usted es apto para recibir la pensión");
	}
	return 0;
}

