#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam;
	scanf("%d",&tam);

	float X[tam];
	int i,menor,pos;

	for (i = 0; i < (tam-1); i++)
	{
		scanf("%f ",&X[i]);
	}

	menor = X[0];
	pos = 0;

	for (i = 0; i < (tam-1); ++i)
	{
		if (X[i]<menor)
		{
			menor = X[i];
			pos = i;
		}
	}

    printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",pos);

	return 0;
}
