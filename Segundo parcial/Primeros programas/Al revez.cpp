#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	int con, largo;
	char cadena[50];
	
	printf("Introduce una frase por favor: ");
	gets(cadena);
	largo=strlen(cadena);
	
	printf("%d\n",largo);
	
	for(con=largo-1;con>=0;con--){
		printf("%c",cadena[con]);
		
	}
	
	return 0;
	
}
