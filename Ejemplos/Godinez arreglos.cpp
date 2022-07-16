/*
Autor: Gabriel Martínez González
Fecha: 21 de agosto 2019
Objetivo: Programa de ejemplo de arreglos
*/

#include "iostream"
#include "locale"

using namespace std;

int main()
{
	int con=0, res;
	setlocale(LC_CTYPE,"Spanish");
	string frases[7]={"Feliz inicio de semana","El mal del puerco es intenso en mi","Que bueno que ya es ombliguito de semana",
	"Hoy toca juebebes","¡Al fin es viernes!","Saba daba","Mañana de nuevo es lunes :'c "};
	string dias[7]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	
	cout << "Seleccione el día de la semana" << endl;
	
	for (;con<7;){
		cout<<(con+1)<<"-"<<dias[con]<<endl;
		con++;
	}
	
	cin>> res;
	
	res=res-1;
	cout<<"La frase del día es: "<<frases[res];
	
	return 0;	
}
