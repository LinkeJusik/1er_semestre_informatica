#include <stdio.h>

int main()
{
	int x[5];
	int i,j;
	
	for (i=0;i<5;i++){
		printf("introduce valores\n");
		scanf ("%d",x[i]);
	}
	
	
	for(i=0;i<5;i++){
		printf("%d ",x[i]);
	}
	
	return 0;
}
