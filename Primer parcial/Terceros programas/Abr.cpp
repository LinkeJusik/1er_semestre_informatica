/*

Autor: Gabriel Mart�nez Gonz�lez
Fecha: 26 de agosto de 2019
Objetivo: Programa para crear una criba de n�meros primos

*/

#include <stdio.h>
int main()
{
	int c=2,r=2,p,a=0,v=0;
	
	printf("�Cuantos n�meros primos deseas calcular?\n");
	scanf("%d",&p);
	
	while(a<p){
		while(r<=c){
			if(c%r!=0){
				v=1;
				c++;

				break;
			}else{
				r++;
				break;
				
			}
			
		}
		if(v=1){
			printf("%d es primo\n",c);
			a++;
		}
		
	}
	return 0;
}
