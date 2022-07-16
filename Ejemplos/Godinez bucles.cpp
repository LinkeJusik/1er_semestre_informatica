/*
Autor: Gabriel Mart�nez Gonz�lez
Fecha: 21 de agosto 2019
Objetivo: Programa de ejemplo de bubles con frases God�nez
*/

#include "iostream"
#include "locale"

using namespace std;

int main()
{
	int con=0, res;
	setlocale(LC_CTYPE, "Spanish");
	string frases[7]={"Feliz inicio de semana","El mal del puerco es inytenso en mi","Que bueno que ya es ombligo de semana",
	"Hoy toca juebebes","�Al fin es viernes!","Saba daba","Ma�ana de nuevo es lunes :'("};
	string dias [7]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	
	cout << "Seleccione el d�a de la semana (numero)" << endl;
	
	while (con<7){
		cout<<(con+1)<<"-"<<dias[con]<<endl;
		con++;
	}
	
	cin>> res;
	
	res=res-1;
	for(con=0;con<7;con++){
		if(res==con){
			cout<<"La frase del d�a es: "<<frases[con];
		}
	}
	
	return 0;
}
