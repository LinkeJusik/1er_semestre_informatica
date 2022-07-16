/*
Autor: Victor Mazón
Fecha: 12 de octubre de 2019
Objetivo: Programa que lee datos de un archivo
*/

#include <stdio.h>
#include <stdlib.h>

void leerArchivo(char* nombreArchivo);

int main(){
	char archivo[50]="mensaje.txt";
	leerArchivo(archivo);
	return 0;
}
void leerArchivo(char* nombreArchivo){
	char renglon[500],letra;
	FILE* read;
	read = fopen(nombreArchivo,"r");
	
	if(read){
		while(!feof(read)){
			letra=fgetc(read);
			fgets(renglon,500,read);
			printf("%c%s",letra,renglon);
		}
	}
	
	if(ferror(read)){
		printf("¡Error! El archivo no pudo ser abierto.");
	}else{
		if(feof(read)){
			printf("\n\nSe llego al final del archivo");
			fclose(read);
		}
	}
}
