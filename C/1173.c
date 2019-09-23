#include <stdio.h>
#include <stdlib.h>

int main(){
	int N[10],numero,i;

    scanf("%d",&numero);

    for(i = 0; i < 10;i++){
        if(i==0)
            N[i]= numero;
        else
            N[i] = N[i-1] * 2;
        printf("N[%d] = %d\n", i, N[i]);
    }
	return 0;
}
