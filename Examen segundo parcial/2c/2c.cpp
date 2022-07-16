/*
Autor: Gabriel Martínez González
Título: Matrices archivos
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
	string texto, aux="";
	int i,j, tam, num,l,w, cont=0, o=0, k=0, n, m, A[20][20],res[20][20];
	char MATAME[100], x[20][20];

	archivo.open("caso3.txt",ios::in); 
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()) {
	  getline(archivo,texto); 
	  tam=texto.size();
	  
	for(i=0;i<tam;i++){
		cout<<texto[i];
	}
	cout<<endl;
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	  
	for(i=0; i<tam;i++){
	  	  	
	  	if(texto[i]!=','){
	  		aux+=texto[i];
		  }else{
		  		istringstream iss (aux);
		  		iss>>num;
		  	
		  	if(cont==0){
		  		n=num;
			  }else if(cont==1){
			  	m=num;
			  }else if(cont==2){
			  	l=num;
			  }else if(cont==3){
			  	w=num;
			  }else{
			  
			  	
		A[k][o]=num;
			  	
			  		if(o<m-1){
			  			o++;
					  }else{
					  	o=0;
					  	k++;
					  }	 
			if(cont==2){
		  		l=num;
			}else if(cont==3){
			  	w=num;
			}
					   
			  }
		  	aux="";
		  	
			   
		  	cont++;
		  }
	}
	
	for(k=0;k<n;k++){
	  	for(o=0;o<m; o++){
	  		cout<<A[k][o]<<"\t";
		  }
		  cout<<endl;
	}
	  
	  cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	 
	  for(k=0;k<n;k++){
	  	for(o=0;o<m; o++){
	  		
	  		if(o%2 != 0 && k%2 == 0){
				res[k][o] =( A[k][o] + l -w);
			}else{
				if(k%2 == 0){
					res[k][o] = (A[k][o] + l);
				}else{
					if(o%2 != 0){
						res[k][o] = (A[k][o] - w);
					}else{
						res[k][o] = A[k][o];
					}
				}
			}
	  		cout<<res[k][o]<<"\t";
		  }
		  cout<<endl;
	  }
	  cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	  
	  for(k=0;k<n;k++){
	  	for(o=0;o<m;o++){
	  		x[k][o]=res[k][o];
	  		cout<<x[k][o]<<"\t";
		  }
		  cout<<endl;
	  }
	  	
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	
	for(k=0;k<n;k++){
	  	for(o=0;o<m;o++){
	  		x[k][o]=res[k][o];
	  		cout<<x[k][o];
		  }
	  }
	  cout<<endl;
	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
	  
	  
	cont=0;
	k=0;
	o=0;
	
}
	archivo.close();
	
}
