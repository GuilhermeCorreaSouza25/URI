#include <stdio.h>
#include <stdlib.h>

int main(){
	const int tam = 12;
	float matriz[tam][tam],media,soma=0;
	int i,j,l;
	char t;

	scanf("%d",&l);
	scanf(" %c",&t);

	for (i = 0; i < tam; ++i)
	{
		for (j = 0; j < tam; ++j)
		{
			scanf("%f",&matriz[i][j]);
		}
	}
    for(i=0;i<tam;i++){
        for ( j = 0; j < tam; ++j)
        {
            if(i == l){
            soma = soma + matriz[i][j];
            }
        }
    }
    if(t=='S')
        printf("%.1f\n",soma);

	if (t == 'M')
	{
		media = soma/tam;
		printf("%.1f\n",media );
	}

	return 0;
}
