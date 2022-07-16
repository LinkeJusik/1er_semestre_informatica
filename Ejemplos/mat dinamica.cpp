/*

Autor: Víctor Mazón
Fecha: 2 de octubre 2019

Objetivo: Matriz dinamica

*/

#include <stdio.h>
int main()
{
	int fil,col,i,j, **matriz;
	
	printf("¿Cuantas filas?\n");
	scanf("%d",&fil);
	
	printf("¿Cuantas columnas?\n");
	scanf("%d",&col);
	
	matriz = new int*[fil];
	
	for(i=0;i<fil;i++){
		matriz[i]=new int[col];
	}
	
	printf("Introduce %d números por favor:\n", fil*col);
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("[%d,%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
	
}
