/*

Autor: Gabriel Martínez González
Fecha: 24 de agosto de 2019

Objetivo: Programa para descomponer un número en sus factores primos

*/

#include <stdio.h>

int main()
{
	int cont=0, n;
	int criba[30] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
	
	printf("Introduzca el número que desea descomponer\n");
	scanf("%d",&n);
	printf("\n");
	
	while (n>1){
		
		if(n% criba[30] == 0){
			n=n/criba[30];
		}
		if (n% criba[30]!=0){
			printf("%d", criba[cont]);
			criba[cont]=cont++;
		}
	}
	
	printf("%d", criba[cont]);
	
	return 0;
}
