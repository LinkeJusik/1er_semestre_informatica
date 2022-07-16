/*

Autor: Gabriel Martínez González
Fecha: 28 de agosto del 2019

Objetivo: Programa para formar rectangulos de mxn (*) (con vacios)

*/

#include <stdio.h>

int main()
{
	int n, m, i=0, j=0;
	
	printf("¿Cuanto vale el lado?\nLado: ");
	scanf("%d",&m);
	
	printf("¿Cuanto vale la altura?\nAltura: ");
	scanf(" %d",&n);
	
	while(i<n){
		while(j<m){
				if(j==0||j==m-1||i==0||i==n-1){
					printf("*");
					j++;					
				}else{
					printf(" ");
					j++;
				}
			}
		printf("\n");
		i++;
		j=0;
	}
	return 0;
}
