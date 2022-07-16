/*

Autor: Gabriel Martínez González
Fecha: 28 de agosto del 2019

Objetivo: Programa de Bubble Sort (ordenar de menor a mayor un arreglo)

*/

#include <stdio.h>

int main()
{
	int x[5];
	int i=0,j=0,cont;
	
	for(j=0;j<5;j++){
		printf("Introduce tu número\n");
		scanf("%d",&x[j]);
		
	}
	
	while(i<5){
		while(j<5){
			if(x[j] > x[j+1]){
				cont = x[j];
				x[j] = x[j+1];
				x[j+1] = cont;
			}
			j++;
		}
		i++;
		j=0;
	}
	
	printf("Orden ascendente: ");
	for(i=0;i<5;i++){
		printf("%d ", x[i]);
	}
	
	printf("\nOrden descendente: ");
	for(i=4;i>=0;i--){
		printf("%d ", x[i]);
	}
	
	return 0;
}
