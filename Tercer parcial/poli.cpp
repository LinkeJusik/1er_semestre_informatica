/*
Autor: Gabriel Martínez González
Fecha: 01/11/2019
Objetivo: Imprimir un polinomio
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <cmath>

int main()
{
	int g,cont,i,h;
	int pol[50];
	
	printf("Introduzca el grado de su polinomio (el exponente de mayor valor)\n");
	scanf("%d",&g);
	
	printf("\nNOTA: Recuerda que si no aparece una cierta x^n; es porque el coeficiente es 0\n\n");
	i=g;
	for(cont=g;cont>=0;cont--){
		if(cont==0){
			printf("Introduzca su termino constante: ");
			scanf("%d",&pol[i]);
		}else{
			if(cont==1){
				printf("Introduzca el coeficiente de su termino de x: ");
				scanf("%d",&pol[i]);
			}else{
				printf("Introduzca el coeficiente de su termino de x^%d: ",cont);
				scanf("%d",&pol[i]);
			}
		}
		i--;
	}
	
	printf("\n");
	h=g;
	for(cont=g;cont>=0;cont--){
		
		if(pol[cont]==0){
			h--;
		}else{
			if(h==0){
				printf("%d",pol[cont]);
			}else{
				if(h==1){
					if(pol[0]==0){
						printf("%dx ",pol[cont]);
						h--;
					}else{
						printf("%dx + ",pol[cont]);
						h--;
					}
				}else{
				
					printf("%dx^%d + ",pol[cont],h);
					h--;
				}
			}
		}
		
	}
	
	return 0;
}
