#include <stdio.h>

int main(){
	int base,altura,natural,h=0,nat,o=0,bas=0,p=0,g=0,r=0,b=0;	
	
	
	printf("Ingrese la base ==> ");
	scanf("%d",&base);

	printf("Ingrese la altura ==> ");
	scanf("%d",&altura);
	
	printf("Ingrese un numero natural ==> ");
	scanf("%d",&natural);
	nat=natural-4;
	bas=base-2;
	
	if(natural>4)
	{
		
	
	for(int i=0;i<=altura;i++)
	{
			
		if(i == 0 || i==altura-1){
			printf("*");
			for(int j=0;j<base-2;j++){
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		
		else{
			
		if(b<altura){
			
			while(p<nat){
				
				printf(" ");
				
				if(h<nat){
					
					for(int u=0;u<base-2;u++){
						
						if(r<nat){
						
							printf("*");
							r++;
							p++;
							h++;
						}
					}
				printf("\n");
				b++;
					
				
				}
			p++;	
			}
		}
		}
		
	}
	}

	
	else{
		printf("El numero debe ser mayor a 4");
	}
		printf("\n\n %d",b);
	
	return 0;
}
