/*J*/

#include <stdio.h>
 #define N 113
 
 int main() {
 	int i,j,val[N+1],x=1;
 	printf("%d,- %d\n",x++,2);
 	for(i=3;i<=N;i+=2){
 		if(val[i]!=1){
 			printf( "%d.- %d\n", x++, i);
 			for(j=2;(i*j)<=N; j++)
		 val[i*j]=1;}
 		
	 }
 	
 	return 0;
 	
 }
