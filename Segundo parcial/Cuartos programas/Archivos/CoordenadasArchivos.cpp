/*
Autor: Gabriel Mart�nez Gonz�lez
T�tulo: Coordenadas
Fecha: 24 de octubre de 2019
*/

#include<iostream>
#include<string>
#include<fstream>
#include <sstream>

using namespace std;

void lectura();

int main(){
	
	lectura();
	
	system ("pause");
	return 0;
}


void lectura(){
	
	ifstream archivo; 
	string texto, aux="", aux1="", aux2="";
	int i,j, tam, num, cont=0, tamaux, k=0, num1, num2, z;
	int cx[10], cy[10], a, b, l;

	
	archivo.open("coordenadas.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()) {
	  getline(archivo,texto); 
	  tam=texto.size();
	  
	   for(i=0; i<tam;i++){
	  	if(texto[i]!=';'){
	  		aux+=texto[i];
		  }else{
		  		aux1=aux[0];
		  		aux2=aux[2];
		  		
		  		istringstream iss (aux1);
		  		iss>>num1;
		  		
		  		istringstream iss2 (aux2);
		  		iss2>>num2;
		  		
				cx[cont]=num1;
				cy[cont]=num2;	
		  	
		  	aux="";
		  	cont++;
		  }
		  
	  }
	  
	  for(z=0; z<cont; z++){
	  		cout<<z+1<<": ("<<cx[z]<<","<<cy[z]<<")"<<endl;
		  }
		  
		  
for(a=0; a<30; a++){
	for(b=0; b<35; b++){
		if(b==10&&a!=20){
			cout<<"�";
		}else{
			cout<<" ";
		}
		
		if(a==20)
		cout<<"�";
		else
		cout<<" ";
		
		for(z=0;z<cont;z++){
				if(a==19-cy[z] && b==10+cx[z]){
				cout<< z+1;
		}
			}	
	}
	cout<<endl;
}
		  z=0;
		  cont=0;
	  
	  cout<<"......................................................................."<<endl;

	}
	archivo.close();
	
}
