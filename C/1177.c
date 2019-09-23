#include <stdio.h>
#include <stdlib.h>

int main(){
	int N[1000],T;
	scanf("%d",&T);

    int i,j;

    for(i=0; i < 1000; i++){
        if(j == T)
            j = 0;
        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);
        j++;
    }

	return 0;
}
