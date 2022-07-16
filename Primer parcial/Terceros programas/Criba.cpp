/*

Autor: Gabriel Martínez González
Fecha: 26 de agosto de 2019
Objetivo: Programa para crear una criba de números primos

*/

#include <stdio.h>
int main()
{
	int n, a, b=1, c=2, d=1;
	
	printf("Escriba hasta que número desea calcular\n");
	scanf("%d",&n);
	
	while(b<=n){
		while(c<b){
			if(b%c==0){
				a=1;
			}else{
				a=0;
			}
			c++;
		} 
		if(a!=1){
			printf("%d. %d \n", d,b);
			d++;
		}
		b++;
	}
	
	
	return 0;
	
}
