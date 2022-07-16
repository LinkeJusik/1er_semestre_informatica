/*L*/
#include <stdio.h>
int main()
{
	int i=1, n;
	int criba[30]={1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,83,89,97,101,103,107,109,};
	printf("Da un número: ");
	scanf("%d",&n);
	while(i<=n){
		if((n%criba[i])==0){
			n=n/criba[1];
			printf("%d ", criba[i]);
		}else{
			i++;
		}
	}
	
	return 0;
}
