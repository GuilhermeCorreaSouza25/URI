#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char mensagem[101];
	int i,tam,bits;
	scanf("%s",&mensagem);

	tam = strlen(mensagem);

	for ( i = bits = 0; i < tam; ++i)
	{
		bits+=mensagem[i];
	}

	if (bits%2 == 0)
	{
		printf("%s0\n",mensagem );
	}
	else
		printf("%s1\n",mensagem );
	return 0;
}
