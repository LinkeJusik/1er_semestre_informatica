/*
Autor: Gabriel Mart�nez Gonz�lez
Fecha: 16 de agosto 2019
Objetivo: Programa para definir si una persona es apta para subir a la monta�a rusa
*/

#include <stdio.h>
int main()
{
	int apto = 0;
	char res;
	printf("�Usted tiene alg�n problema cardiaco? (s/n)\n");
	scanf("%c",&res);
	if (res == 's'){
		apto = 1;
	} else {
		printf("�Usted tiene la altura m�nima de 1.50 m? (s/n)\n");
		scanf(" %c",&res);
		if(res != 's'){
			apto = 1;
		}
	}
	if (apto == 1){
		printf("Usted NO puede subir a la monta�a rusa");
	} else {
		printf("Usted puede subir a la monta�a rusa");
	}
	return 0;
}
