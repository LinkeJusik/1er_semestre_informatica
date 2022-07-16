#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <cmath>

int main()
{
	int B[30]={1,2,3,4,5,6,7,8,9,10};
	int put,z,j,r=10,a,y,w,x=0;
	
	for (put=0;put<777;put++){
		printf("Indique lo que desea que el programa realice ahora\n1. Insertar un valor despues de la ultima posicion con valor\n2. Insertar un valor en la posicion X\n3. Eliminar el valor de la ultima posición\n4. Elimine el valor en la posicion X\n5. Salir ALV");
		scanf("%d",&a);
		
		switch(a){
			case 1:
				for(j=0;j<r;j++){
					printf("%d ",B[j]);
				}
				printf("\n");
				r++;
				printf("Inserta el valor en tu siguiente posicion\n");
				scanf("%d",&B[r-1]);
				
				for(j=0;j<r;j++){
					printf("%d ",B[j]);
				}
				printf("\n\n");
				break;
			case 2:
				for(j=0;j<r;j++){
					printf("%d ",B[j]);
				}
				printf("\n");
				printf("En que posición lo quieres incrustar?\n");
				scanf("%d",&z);
				printf("Introduce el valor que quieres que tenga esa posición ALV");
				scanf("%d",&w);
				z=z-1;
				
				for(j=r;j>=z;j--){
					B[j]=B[j-1];
				}
				B[z]=w;
				
				if(z<r){
					r++;
					for(j=0;j<r+1;j++){
						printf("%d ",B[j]);
					}
				}else{
					for(j=0;j<z+1;j++){
						printf("%d ",B[j]);
						r=z+1;
					}
				}
				
				
				printf("\n\n");
				break;
			case 3:
				B[r-1]=0;
				for(j=0;j<r;j++){
					if(B[j]==0){
						y++;
					}else{
						printf("%d ",B[j]);
					}
				}
				printf("\n\n");
				r--;
				break;
			case 4:
				for(j=0;j<r;j++){
					printf("%d ",B[j]);
				}
				printf("\n");
				printf("De que posición deseas quitar el número?\n");
				scanf("%d",&z);
				z=z-1;
				x=z;
				
				for(j=x;j<r-1;j++){
					B[z]=B[z+1];
					z++;
				}
				
				B[r]=x;;
				
				r--;
				for(j=0;j<r;j++){
					printf("%d ",B[j]);
				}
				printf("\n\n");
				break;
				
				break;
			case 5:
				printf("HASTA LA PROXIMA");
				put=777;
				break;
		}
	}
	return 0;
}
