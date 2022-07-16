#include <stdio.h>
#include <stdlib.h>

void leerArchivo(char* nombreArchivo);


int main(){
	
	char archivo[50]="Casos.txt";
	leerArchivo(archivo);
	
	return 0;
}

void leerArchivo(char* nombreArchivo){
	
	char renglon[500],letra[500],letra2;
	int i=0,cont=0,x[500],j=0,y[500],z,k=0,aux[80],m=0,q=0,limx=10,limy=10,r=0,auxi=0,auxil=0,fk;
	int auxilio=0,contador=0,sumatoriachiday=0,sumatoriachidax=0,sumatoriachidaxy=0,sumatoriachidaxx=0;
	float pendientefinal,bfinal;
	float sumatoriaxy,sumatoriax,sumatoriay,sumatoriaxx,total2,pendientee[50],bb[50];
	int total=0,auxilioa[50],asd=0;
	FILE* read;
	
	read = fopen(nombreArchivo,"r");
	
	if(read){
		while(!feof(read)){
			
			letra[i]=fgetc(read);
			printf("%c",letra[i]);
			z=(int) letra[i];
			
			contador++;
			
			if(letra[i]==';' || z==10 ){
				if(letra[i]==';'){
					cont++;
				}
				if(contador==6){
				
				auxilio=((int)letra[i-5]-48)*10+((int)letra[i-4]-48);
				x[q]=auxilio;
				
				auxilio=((int)letra[i-2]-48)*10+((int)letra[i-1]-48);
				y[q]=auxilio;
				q++;
				
				}
				if(contador==5){
				
				auxilio=((int)letra[i-4]-48)*10+((int)letra[i-3]-48);
				x[q]=auxilio;
				
				auxilio=((int)letra[i-1]-48);
				y[q]=auxilio;
				q++;
				}
				
				if(z==10){
					aux[k]=cont+1;
					k++;
					cont=0;
				}
				
				/*auxilio=((int)letra[i-5]-48)*10+((int)letra[i-4]-48);
				x[q]=auxilio;
				
				auxilio=((int)letra[i-2]-48)*10+((int)letra[i-1]-48);
				y[q]=auxilio;
				q++;*/
			contador=0;	
			}
		
		i++;
	}
	
	for(int g=0;g<k;g++){
		
		for(int h=0;h<aux[g];h++){
			
			printf("\nCordenada %d del renglon %d = (%d,%d) \n",h+1,g+1,x[m],y[m]);
			sumatoriachidax=sumatoriachidax+x[m];
			sumatoriachiday=sumatoriachiday+y[m];
			sumatoriachidaxy=sumatoriachidaxy+(y[m]*x[m]);
			sumatoriachidaxx=sumatoriachidaxx+(x[m]*x[m]);
			m++;
			total++;
		}
		auxilioa[g]=m;
		sumatoriax=(float)sumatoriachidax;
		sumatoriaxy=(float)sumatoriachidaxy;
		sumatoriay=(float)sumatoriachiday;
		sumatoriaxx=(float)sumatoriachidaxx;
		total2=(float)total;
	
		pendientefinal=(sumatoriaxy-((sumatoriax*sumatoriay)/total2))/(sumatoriaxx-((sumatoriax)*(sumatoriax))/total2);
		pendientee[asd]=pendientefinal;
		
		bfinal=((sumatoriay)/total2)-pendientefinal*((sumatoriax)/total2);
		bb[asd]=bfinal;
		asd++;
		printf("\n\nSumatoria X = %d\n\nSumatoria Y = %d\n\nSumatoria XY = %d\n\nSumatoria X^2 = %d \n\nPendiente= %.4f  \n\nInterseccion en y = %.4f  \n\n",sumatoriachidax,sumatoriachiday,sumatoriachidaxy,sumatoriachidaxx,pendientefinal,bfinal);
		
		
		
		
		sumatoriachidax=0;
		sumatoriachidaxy=0;
		sumatoriachiday=0;
		sumatoriachidaxx=0;
		sumatoriaxx=0;
		sumatoriax=0;
		sumatoriaxy=0;
		sumatoriay=0;
		total=0;
		
		
		
		
	}
	
		m=0;
		float estimacion,yy,xx;
		
		for(int g=0;g<k;g++){
		printf("\n\nRenglon: %d",g+1);
		printf("\n\n\nX      Estimaciones: ");
		
		for(int h=0;h<aux[g];h++){
		
		
		
		yy=(float)y[m];
		xx=(float)x[m];
		
		estimacion=pendientee[g]*xx+bb[g];
		
		printf("\n %d       %.2f",x[m],estimacion); 
		m++;
		
		
		}
		}
	
	
}
}
