/*
Autor: Gabriel Martínez González
Fecha: 24 de septiembre de 2019
Objetivo: Detectar si una cadena es palindromo xd
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con,i=0,largo,b,q=0,o=0,y=0,ne;
	char cadena[50],ele[50];
	char s;
	
	printf("Ingrese una cadena: \n");
	gets(cadena);
	
	largo=strlen(cadena);
	
	for(con=0;con<largo;con++){
		if(cadena[i]==' '){
			for(b=0;b<largo;b++){
				cadena[i]=cadena[i+1];
				i++;
			}
			i=0;
			i++;
			con=0;
		}else{
			i++;
		}
	}
	ne=strlen(cadena);
	
	for(con=ne-1;con>=0;con--){
		ele[q]=cadena[con];
		q++;
	}
	
	printf("Al derecho: ");
	
	for(con=0;con<ne;con++){
		printf("%c",cadena[con]);
		}
		
	printf("\nAl revez: ");
		
	for(con=0;con<ne;con++){
		printf("%c",ele[con]);
		}
	
	printf("\n");
	
	for(con=0;con<ne;con++){
		if(ele[o]==cadena[o]){
			y++; /**contador de coincidencias*/
			o++; /*posición*/
		}
	}
	
	if(y==ne){
		printf("La cadena es palindromo as\241 bien bonito UwUr");
	}else{
		printf("Tu porqueria no es palindromo UmUr");
	}
	return 0;
}
