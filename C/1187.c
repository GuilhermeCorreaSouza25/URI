#include <stdio.h>
#include <stdlib.h>

int main(){
	const int tam = 12;
	double matriz[tam][tam],media,soma=0,cont=0;
	int i,j;
	char t;

	scanf("%c",&t);

	for (i = 0; i < tam; ++i)
	{
		for (j = 0; j < tam; ++j)
		{
			scanf("%lf",&matriz[i][j]);
		}
	}

    for(i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; ++j)
        {
            if((i < j) && ((i+j)<(tam-1))){
            	soma = soma + matriz[i][j];
            	cont++;
            }
        }
    }

    if(t=='S')
        printf("%.1lf\n",soma);

	if (t == 'M')
	{
		media = soma/(cont);
		printf("%.1lf\n",media);
	}

	return 0;
}
