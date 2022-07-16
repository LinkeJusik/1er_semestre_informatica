#include <stdio.h>
int main()
{
	float n,f,j,k,m,q,l;
	
	printf("N\243mero del cual quieres el factorial: \n");
	scanf("%f",&n);
		
	f=n;
	
	for(j=1;j<n;j++){
		f=f*j;
	}
		
	printf("El factorial es %f\n",f);
	
	printf("N\243mero del cual quieres el factorial: \n");
	scanf("%f",&m);
		
	q=m;
	float r=m-1;
	
	for(l=r;l==1;l--){
		q=q*l;
	}
		
	printf("El factorial es %f",l);
	
	return 0;
}
