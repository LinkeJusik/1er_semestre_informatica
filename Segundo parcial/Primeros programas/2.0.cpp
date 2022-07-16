/**
Autor: Gabriel Martínez González
Fecha: 30 de septiembre de 2019
Objetivo: cadena de Fibonacci (encontrar el enesimo elemento y encontrar todos los elementos menores a n)
**/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	int i,b=0,c=1,a,d;
	
	printf("Ingresa hasta que n\243mero deseas calcular\n");
	scanf("%d",&a);
	printf("\n%d\n",c);
	
	int re[a];
	
	for(i=0;d<=a;i++){
			re[a]=c+b;
			printf("%d\n",re[a]);
			b=c;
			c=re[a];
			d=c+b;
	}
	return 0;
	
}
