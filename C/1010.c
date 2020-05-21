#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo_peca1, qtde_peca1, codigo_peca2, qtde_peca2;
    float valor_peca1, valor_peca2, valor_total;

    scanf("%d %d %f", &codigo_peca1, &qtde_peca1, &valor_peca1);
    scanf("%d %d %f", &codigo_peca2, &qtde_peca2, &valor_peca2);

    valor_total = (float)(qtde_peca1 * valor_peca1) + (float)(qtde_peca2 * valor_peca2);

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);
    return 0;
}