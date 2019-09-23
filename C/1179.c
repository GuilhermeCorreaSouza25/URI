#include <stdio.h>
#include <stdlib.h>
int main(){
	int par[5],impar[5],cont_par = 0,cont_impar = 0,num,i,j;

	for ( i = 0; i < 15; ++i)
	{
		scanf("%d",&num);
		if (num % 2 == 0)
		{
			par[cont_par] = num;
			cont_par++;
			if (cont_par == 5)
			{
				for ( j = 0; j < 5; ++j)
				{
					printf("par[%d] = %d\n",j,par[j] );
				}
				cont_par = 0;
			}
		}
		else
		{
			impar[cont_impar] = num;
			cont_impar++;
			if (cont_impar == 5)
			{
				for (j = 0; j < 5; ++j)
				{
					printf("impar[%d] = %d\n",j,impar[j] );
				}
				cont_impar = 0;
			}
		}
	}
	for (j = 0; j < cont_impar; ++j)
	{
		printf("impar[%d] = %d\n",j,impar[j] );
	}
	for (j = 0; j < cont_par; ++j)
	{
		printf("par[%d] = %d\n",j,par[j] );
	}

	return 0;
}
