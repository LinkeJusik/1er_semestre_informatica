/*
Autor: Gabriel Martínez González
Fecha: 16 de agosto 2019
Objetivo: Programa para definir si una persona es apta para subir a los vagones reservados del metro
*/

#include <stdio.h>
int main()
{
	int apto = 0;
	char res;
	printf("¿Usted tiene 12 años o más? (s/n)\n");
	scanf("%c",&res);
	if(res == 'n'){
		apto = 1;
	} else {
		printf("¿Usted es hombre? (s/n)\n");
		scanf(" %c",&res);
		if(res == 'n'){
			apto = 1;
		}else{
			printf("¿Usted tiene menos de 70 años? (s/n)\n");
			scanf(" %c",&res);
			if(res == 'n'){
				apto = 1;
			}
		}
	}
	if(apto == 1){
		printf("Usted puede subir a los vagones reservados :)");
	} else {
		printf("Usted NO puede subir a los vagones reservado :/");
	}
	return 0;
}
