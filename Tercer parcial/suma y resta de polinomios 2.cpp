#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main()
{
	int m,n,n2,aiuda=0,p1[102],p2[102],c1[102],c2[102],ayu[102]; 
	cout<<"\tIngresa un polinomio \n"<<endl;
	cout<<"Cuantos polinomios deseas ingresar? \t"<<endl; 
	scanf("%d",&m);
	
	cout<<"Ingresa el grado del polinomio\n"<<endl;
	scanf("%d", &n);
	ayu[0]=n;
	system("cls");
	 
	for(int i=0;i<=n;i++){
		p1[i]=i;
	}
	
	for(int i=n;i>=0;i--){
		if(i==0){//comparacion
			printf("Dame el termino independiente\n\n");
			scanf("%d",&c1[i]);	
		}else{
			printf("Dame el coeficiente de x^%d\n\n",i);
			scanf("%d",&c1[i]);	
		}	
	}
	
	system("cls");
	
	for(int t=1;t<m;t++){
		printf("\n\nDame el grado del siguente polinomio\n");
		scanf("%d", &n2);
		ayu[t]=n2;
		system("cls");
		
		
	 
		for(int i=0;i<=n2;i++){
			p2[i]=i;
		}
		
		for(int i=n2;i>=0;i--){
			if(i==0){
				printf("Dame el termino independiente\n\n");
				scanf("%d",&c2[i]);	
			}else{
			printf("Dame el coeficiente de x^%d\n\n",i);
			scanf("%d",&c2[i]);	
			}	
		}
		if(n==n2){
					for(int i=n;i>=0;i--){
						c1[i]=c1[i]+c2[i];
					}
		}else if(n>n2){
					
					for(int i=n2+1;i<=n;i++){
					
					p2[i]=0;
					c2[i]=0;
					
					}
					
					for(int i=n;i>=0;i--){
						c1[i]=c1[i]+c2[i];
						p2[i]=p1[i];
						
					}
		}else if(n2>n){
					for(int i=n+1;i<=n2;i++){
					
					p1[i]=0;
					c1[i]=0;
					
					}
					for(int i=n2;i>=0;i--){
						c1[i]=c1[i]+c2[i];
						p1[i]=p2[i];
						
					}
					n=n2;
				}
						
	}
	
	for(int k=0;k<m;k++){
		if(ayu[k]> aiuda){
			aiuda=ayu[k];
		}
	}
	
	printf("\nEl polinomio resultante es:\n\n= ");
	for(int i=aiuda;i>=0;i--){
		if(c1[i]>0&&p1[i]!=aiuda){
			printf(" + ");
		}
		if(c1[i]*p1[i]!=0||p1[i]==0){
			
		if(p1[i]==0){
				printf("%d",c1[i]);
			}else{
				printf("%dx^%d",c1[i],p1[i]);
			}	
		}else{
			printf("");
		}
	}

	return 0;
}
