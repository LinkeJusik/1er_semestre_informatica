/*

Autor: Gabriel Martínez González
Fecha: 26 de agosto de 2019
Objetivo: Programa para determinar si un número es primo o no

*/

#include <stdio.h>
int main()
{
	int n, a=2, cont=0;
	
	printf("Introduzca el número natural que desea analizar\nNúmero ");
	scanf("%d",&n);
	
	while (a<=n){
		
		if(n%a==0){
			cont=cont+1;
		}
		a++;		
	}
	
	if(cont==1){
		printf("%d es número primo", n);
	}else{
		printf("%d no es número primo :(", n);
	}
	
	return 0;
}
