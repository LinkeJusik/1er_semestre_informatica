/***
Autor: Victor Mazón
Fecha: 12 de octubre de 2019
Objetivo: Programa que muestra el uso de recursividad
*/

#include "iostream"

using namespace std;

int sumatoria(int n);

int main()
{
	int n;
	cout<<"Ingrese un número entero" << endl;
	cin>> n;
	cout<<"La sumatoria de los primeros "<<n<<" enteros es: "<<sumatoria(n)<<endl;
	return 0;
}

int sumatoria(int n){
	int res;
	if(n==1){
		res=1;
	}else{
		res=sumatoria(n-1)+n;
	}
	return res;
}
