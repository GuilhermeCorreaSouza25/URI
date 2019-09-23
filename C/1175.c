#include <stdio.h>
#include <stdlib.h>

int main(){
	const int l = 20;
	int n[l],aux = 0,j=0,i;
	for(i = 0; i < l; i++)
	{
		scanf("%d",&n[i]);
	}
	for(i = 0; i < (l/2); i++)
	{
	    j = l-i-1;
		aux = n[i];
		n[i] = n[j];
		n[j] = aux;
	}
	for(i = 0; i < l; i++)
	{
		printf("N[%d] = %d\n",i,n[i]);
	}
	return 0;
}
