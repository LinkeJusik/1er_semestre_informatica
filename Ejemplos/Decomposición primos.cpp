/*J*/

#include <stdio.h>
#include <string>


int main(){
	
	int n=0,c=2,r=0,a=0,b=0;
	int f[100],g[20]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
	
	printf("Introduce tu número a descomponer en números primos\n");
	scanf("%d",&n);
	printf("\n");
	
	while (n>1){
		
		a=n%g[c];
		if (a<1){
			n=n/g[c];
			f[c]=g[c];
			printf("%d,",f[c]);
		}else {c++;}
		
		if (n==1)
		return 0;

}
	
}
