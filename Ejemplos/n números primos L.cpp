/*L*/

#include <stdio.h>
int main()
{
	int n, i, valido, p;
	printf("Introdue un n�mero entero: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		valido=0;
		for(p=2;p<i;p++){
			if(i%p==0){
				valido=1; 
				break;
			}
		} if(valido!=1){
			printf("%d es n�mero primo \n", i);
		}
		
	}	
	return 0;	
	
}
