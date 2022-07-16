/*

Autor: Victor Mazón
Fecha: 2 de octubre 2019

Objetivo: Recorrer una matriz

*/

#include <stdio.h>
int main()
{
	int i, j, matriz[3][4];
	
	printf("Introduce 12 números por favor: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("[%d,%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
