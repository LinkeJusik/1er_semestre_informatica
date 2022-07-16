/*

Autor: Equipo 5
Fecha: 11 de septiembre de 2019
Objetivo: Programa para imprimir un rectangulo extraño

*/

#include <stdio.h>

int main()
{
	int b, a, n,c=0, i, j, cont=0;
	
	printf("¿Cuanto vale la altura?\nAltura: ");
	scanf(" %d",&a);
	
	printf("¿Cuanto vale la base?\nBase: ");
	scanf("%d",&b);
	
	printf("Introduzca un número natural mayor a 4\nN= ");
	scanf("%d",n);

	for(i=0;i<a;i++){
		for (j=0;j<b;j++){
			if ((i==0 && (j==0||j==b-1)) || (i==a-1 && (j==0||j==b-1))){
					printf("*");			
				} if ((i==1&&(j==1||j==b-2)) || (i==a-2&&(j==1||j==b-2))){
					if(cont<n){
						printf("*");
						cont++;
					}else{
					printf(" ");
				}
		}
		printf("\n");
	}
	}
	
	
	return 0;
}
