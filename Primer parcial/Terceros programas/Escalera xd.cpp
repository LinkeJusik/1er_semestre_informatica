/*

Autor: Gabriel Martínez González
Fecha: 28 de agosto del 2019
Objetivo: Programa para formar escaleras (*)

*/

#include <stdio.h>

int main()
{
	int i=0,j=0,n,l=1;
	
	printf("¿De cuantos escalones desea su escalera?\nEscalones: ");
	scanf("%d",&n);
	
	while(i<n){
		while(j<l){
			printf ("*");
			j++;
		}
		printf("\n");
		i++;
		l++;
		j=0;
	}
	
	return 0;
	
}
