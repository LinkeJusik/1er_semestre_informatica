/*

Autor: Gabriel Mart�nez Gonz�lez
Fecha: 26 de agosto de 2019
Objetivo: Programa para determinar si un n�mero es primo o no

*/

#include <stdio.h>
int main()
{
	int n, a=2, cont=0;
	
	printf("Introduzca el n�mero natural que desea analizar\nN�mero ");
	scanf("%d",&n);
	
	while (a<=n){
		
		if(n%a==0){
			cont=cont+1;
		}
		a++;		
	}
	
	if(cont==1){
		printf("%d es n�mero primo", n);
	}else{
		printf("%d no es n�mero primo :(", n);
	}
	
	return 0;
}
