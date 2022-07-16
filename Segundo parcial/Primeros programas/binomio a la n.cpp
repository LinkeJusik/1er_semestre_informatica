/*
Autor: 
Fecha: 
Objetivo: calcular un binomio a la n'sima potencia
*/

#include <stdio.h>
int main()
{
	int n,f,j,k,i,h,g,w,x,y,o,z=0;
	
	printf("Ingrese a que potencia va a elevar el binomio (a+b): \n");
	scanf("%d",&n);
		
	
	
	for(k=0;k<=n;k++){
		if(j<n){
			f=n;
			for(j=1;j<n;j++){
				f=f*j;
			}
		}
			
		if(k==0){
			g=1;
		} else {
			h=k;
			for(j=1;j<=h;j++){
				g=g*j;
				
			}
		}
		
		if(k==n){
			i=1;
		} else {	
			i=n-k;
			w=i;
			for(j=1;j<i;j++){
				w=w*j;
			}
		}
		y=n-k;
		x=f/(g*w);
		
		
		printf("%d a^%d b^%d ",x,y,k);
		o=n-1;
		if(z<=o){
			printf("+ ");
			z++;
		}			
		
		g=1;
		h=0;
		j=n+1;
	}
	
	return 0;
}
