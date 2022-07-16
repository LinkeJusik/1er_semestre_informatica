/**
Autor: Gabriel Martínez González
Fecha: 25 de septiembre de 2019
Objetivo: imprimir cadenas sin espacios
**/

#include <stdio.h>

int main()
{
	int a, b=2,c, i=0;
	int re[50];
	
	
	printf("Introduce tu n\243mero en sistema decimal: \n");
	scanf("%d",&a);
	
		while(i<50&&b>=1){
			b=a/2;
			c=a%2;
			if (a%2==0){
				re[i]=0;
				i++;
			} else {
				re[i]=1;
				i++;
			}
			a=b;
		}

	
	for(i=50;i>=0;i--){
		printf("%d", re[i]);
	}
	
	return 0;
	
}
