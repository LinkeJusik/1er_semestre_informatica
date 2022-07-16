/*

Autor: Gabriel Martínez González
Fecha: 24 de agosto de 2019

Objetivo: Programa para promediar cinco numeros cualesquiera

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {1,2,3,4,5};
	int suma = 0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
	}
	
	suma = suma/5;
	
	cout<<"El promedio de los elementos es "<<suma<<endl;
	
	getch();
	return 0;
}
