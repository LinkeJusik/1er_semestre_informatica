/******************************************************************************

Autor: Víctor Mazón
Fecha: 04 de septiembre 2019

Objetivo: Programa de repaso primer parcial

*******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct operacion{
	float num1;
	float num2;
	float res;
};

operacion suma(float n1,float n2);
operacion resta(float n1,float n2);
operacion multi(float n1,float n2);
operacion divi(float n1,float n2);


int main()
{
	int con=0, seguir=1, opc, historial=0, historia = 0;
	float n1, n2, res;
	operacion op;
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
		   op = suma(n1,n2);	
    	   resSt<<op.res;
    	   cout<<"La suma de "<<op.num1<<" y "<<op.num2<<" es "<<op.res<<endl;
    	   signo = "+";
		break;
		case 2:    		
		   historial++;
    	   op = resta(n1, n2);	
    	   resSt<<op.res;
    	   cout<<"La resta de "<<op.num1<<" y "<<op.num2<<" es "<<op.res<<endl;
    	   signo = "-";
		break;
		case 3:    		
		   historial++;
    	   op=multi(n1 , n2);	
    	   resSt<<op.res;
    	   cout<<"El producto de "<<op.num1<<" y "<<op.num2<<" es "<<op.res<<endl;
    	   signo = "x";
  		   
    	   
		break;
		case 4:    		
		   historial++;
		   signo = "/";
		   if(n2!=0.0){
		   	 op=divi(n1 , n2);	
    	     resSt<<op.res;
    	   	 cout<<"El cociente de "<<op.num1<<" y "<<op.num2<<" es "<<op.res<<endl;
    	   
		   } else {
		   	 cout<<"La divisi\242n entre cero esta indefinida"<<endl;
		   	 resSt<<"indefinido";
		   }
		break;
		case 5:    
		  
		  
		  if(historial<10){
		  	historia = historial;
		  }else{
		  	historia=10;
		  }
		  cout<<"Las \243ltimas "<<historia<<" operaciones realizadas fueron:"<<endl;		
    	  for (con=0;con<=historia;con++){
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
		if(opc>=1&&opc<=4){
			registro = n1St.str()+  signo + n2St.str() +"="+resSt.str();
			operaciones[historial%10]=registro;
			n1St.str("");
			n2St.str("");
			resSt.str("");
		}
		
		
		system("pause");
	}
    return 0;
    
}

/*Función suma
11/10/2019
Suma dos números*/
operacion suma(float n1,float n2){
	operacion oper;
	oper.num1=n1;
	oper.num2=n2;
	oper.res = n1+n2;
	return oper;	
}

/*Función resta
11/10/2019
resta dos números*/
operacion resta(float n1,float n2){
	operacion oper;
	oper.num1=n1;
	oper.num2=n2;
	oper.res = n1-n2;
	return oper;	
}

/*Función multiplicacion
11/10/2019
multiplica dos números*/
operacion multi(float n1,float n2){
	operacion oper;
	oper.num1=n1;
	oper.num2=n2;
	oper.res = n1*n2;
	return oper;	
}

/*Función division
12/10/2019
divide dos números*/
operacion divi(float n1,float n2){
	operacion oper;
	oper.num1=n1;
	oper.num2=n2;
	oper.res = n1/n2;
	return oper;	
}




