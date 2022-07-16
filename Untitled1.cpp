/*
Autor: Gabriel Martínez González
Fecha: 10 de octubre 2019
Objetivo: Multiplicar dos matrices
*/

#include <stdio.h>
int main()
{
	int fil,col,i,z,j,q,w,f,g,d=0,e=0, **matriz, **otra, **res,b;
	int a[50];
	
	printf("¿Cuantas filas tendra tu primer matriz?\n");
	scanf("%d",&fil);
	
	printf("¿Cuantas columnas tendra tu primer matriz?\n");
	scanf("%d",&col);
	
	matriz = new int*[fil];
	
	for(i=0;i<fil;i++){
		matriz[i]=new int[col];
	}
	
	printf("Introduce tu primer matriz de %d números:\n", fil*col);
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("[%d,%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}

	printf("Número de filas de la segunda matriz:\n");
	scanf("%d",&q);
	
	printf("Número de columnas:\n");
	scanf("%d",&w);
		
	otra = new int*[q];
	
	for(i=0;i<q;i++){
		otra[i]=new int[w];
	}
	
	if(q==col){
		printf("Introduce la matriz que vas a multiplicar de %d numeros:\n", q*w);
	
		for(i=0;i<q;i++){
			for(j=0;j<w;j++){
				printf("[%d,%d]:",i,j);
				scanf("%d",&otra[i][j]);
			}
		}
	
		for(i=0;i<q;i++){
			for(j=0;j<w;j++){
			printf("%d ",otra[i][j]);
			}
		printf("\n");
		}
	
		res = new int*[fil];
	
		for(i=0;i<fil;i++){
			res[i]=new int[w];
		}
		
	
		printf("\nLa multiplicación de ambas matrices es: \n\n"); /*Aqui es donde todo se va la mierda**/
	
		for(g=0;g<w;g++){
		
		for(f=0;f<fil;f++){
				i=0;
				a[i]=0;
		for(b=0;b<q;b++){
				
			z = matriz[f][j] * otra[d][g];
			a[i] = a[i]+z;
			
			}
			i++;
		}
		}
		
		
		
		b=0;
		for(i=0;i<fil;i++){
			
			for(e=0;e<w;e++){
				
				res[i][e]=0;
				res[i][e]=a[b];	
				printf("%d ", res[i][e]);
				b++;
			}
			
		printf("\n");
				
		}
		
	}else{
		printf("Sólo puedes multiplicar dos matrices si el número de columnas de la primera es igual al número de filas de la segunda");
	}
	
	return 0;
}
