/*

Autor: Gabriel Mart?nez Gonz?lez
Fecha: 24 de agosto de 2019

Objetivo: Programa para sumar cinco numeros cualesquiera

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
	
	cout<<"La suma de los elementos es "<<suma<<endl;
	
	getch();
	return 0;
}
