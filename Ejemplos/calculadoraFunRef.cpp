/******************************************************************************

Autor: Víctor Mazón
Fecha: 04 de septiembre 2019

Objetivo: Programa de repaso primer parcial

*******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void suma(float n1,float n2,float &res);
void resta(float n1,float n2,float &res);
void multi(float n1,float n2,float &res);
void divi(float n1,float n2,float &res);


int main()
{
	int con=0, seguir=1, opc, historial=0;
	float n1, n2, res;
	stringstream resSt, n1St, n2St;
	string operaciones[10], registro, signo;
	string menu[6]={"1-. Suma","2-. Resta","3-. Multiplicaci\242n","4-. Divisi\242n","5-. Ver Historial","6-. Salir"};
	
    while(seguir) {
    	system("cls");
    	printf("Seleccione la operaci\242n que desea realizar\n");
    	
    	for (con=0;con<6;con++){
    		cout<<menu[con]<<endl;
		}
    	
    	scanf("%d",&opc);
    	
    	if(opc>=1&&opc<=4){
		
	    	cout<<"Ingresa el primer n\243mero: ";
	    	cin>>n1;
	    	n1St<<n1;
	    	
	    	cout<<"Ingresa el segundo n\243mero: ";
	    	cin>>n2;
	    	n2St<<n2;
    	}
    	
    	
    	switch(opc){
    	case 1:    	
    	   historial++;
		   suma(n1,n2,res);	
    	   resSt<<res;
    	   cout<<"La suma de "<<n1<<" y "<<n2<<" es "<<res<<endl;
    	   signo = "+";
		break;
		case 2:    		
		   historial++;
    	   resta(n1, n2,res);	
    	   cout<<"La resta de "<<n1<<" y "<<n2<<" es "<<res<<endl;
    	   resSt<<res;
    	   signo = "-";
		break;
		case 3:    		
		   historial++;
    	   multi(n1 , n2,res);	
    	   cout<<"El producto de "<<n1<<" y "<<n2<<" es "<<res<<endl;
  		   signo = "x";
  		   resSt<<res;
    	   
		break;
		case 4:    		
		   historial++;
		   signo = "/";
		   if(n2!=0.0){
		   	 divi(n1 , n2,res);	
    	     cout<<"El cociente de "<<n1<<" y "<<n2<<" es "<<res<<endl;
    	     
    	     resSt<<res;
		   } else {
		   	 cout<<"La divisi\242n entre cero esta indefinida"<<endl;
		   	 resSt<<"indefinido";
		   }
		break;
		case 5:    
		  
		  cout<<"Las \243ltimas "<<(historial%10)<<" operaciones realizadas fueron:"<<endl;		
    	  for (con=0;con<=historial;con++){
    		cout<<operaciones[con]<<endl;
		  }
		break;
		case 6:    		
    	   cout<<"Fue un gusto trabajar contigo, hasta la pr\243xima"<<endl;
    	   seguir = 0;
		break;
		default:
		   cout<<"Opci\242n inv\240lida";	
		   
		break;
		}
		registro = n1St.str()+  signo + n2St.str() +"="+resSt.str();
		operaciones[historial%10]=registro;
		n1St.str("");
		n2St.str("");
		resSt.str("");
		
		system("pause");
	}
    return 0;
    
}

/*Función suma
10/10/2019
Suma dos números*/
void suma(float n1,float n2,float &res){
	res = n1+n2;
	n1=n1*2;
	n2=n2*3;
}

/*Función resta
10/10/2019
resta dos números*/
void resta(float n1,float n2,float &res){
	res =n1-n2;
	n1=n1*2;
	n2=n2*3;
}

/*Función multiplicacion
10/10/2019
multiplica dos números*/
void multi(float n1,float n2,float &res){
	res= n1*n2;
	n1=n1*2;
	n2=n2*3;
}

/*Función division
10/10/2019
divide dos números*/
void divi(float n1,float n2,float &res){
	res= n1/n2;
	n1=n1*2;
	n2=n2*3;
}




