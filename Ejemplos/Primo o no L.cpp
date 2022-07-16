/*L*/

#include <stdio.h>
int main()
{
	int n, i, p=1, cont=0;
	printf("Introduce un número entero: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		while(p<=n){
			if(n %p==0){
				cont=cont+1;
			}
			p++;
		}
	
	}
	if(cont==2){
		printf("%d es primo", n);
	}else{
		printf("%d no es primo", n);
	}
	
	return 0;	
}
