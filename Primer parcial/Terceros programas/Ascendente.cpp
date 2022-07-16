/*

Autor: Gabriel Martínez González
Fecha: 28 de agosto del 2019
Objetivo: Programa de Bubble Sort (ordenar de menor a mayor un arreglo)

*/

#include <stdio.h>

int main()
{
	
	int i=0,j=0,cont,c;
	int x[5];
	
	for(i=0; i<5; i++){
		printf("Introduce cinco números que deseas ordenar en orden ascendente\n");	
		scanf("%d",x[i]);
		printf("\n");
	}
	
	for(i=0;i<c;i++){
		while(j<c){
			if(x[j] > x[j+1]){
				cont = x[j];
				x[j] = x[j+1];
				x[j+1] = cont;
			}
			j++;
		}
		j=0;
	}
	i=0;
	printf("Orden ascendente: ");
	while(i<c){
		printf("%d ", x[i]);
		i++;
	}
		return 0;
}
