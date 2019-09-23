#include <stdio.h>
#include <stdlib.h>

int main(){
	const int l = 10;
	int X[l],i;
	for(i = 0; i < l; i++)
	{
		scanf("%d",&X[i]);
		if (X[i]<=0)
		{
			X[i] = 1;
		}
	}

	for(i = 0; i < l; i++)
	{
		printf("X[%d] = %d\n",i,X[i]);
	}
	return 0;
}
