#include <stdio.h>
int main()
{
    int dia, diafim, hora, horafim, minuto, minutofinal, segundo, segundofinal;

    printf("Dia ");
    scanf("%d", &dia);
    scanf("%d : %d : %d", &hora, &minuto, &segundo);
    printf("Dia ");
    scanf("%d", &diafim);
    scanf("%d : %d : %d", &horafim, &minutofinal, &segundofinal);

    segundo = segundofinal - segundo;
    minuto = minutofinal - minuto;
    hora = horafim - hora;
    dia = diafim - dia;

    if (segundo < 0)
    {
        segundo += 60;
        minuto--;
    }

    if (minuto < 0)
    {
        minuto += 60;
        hora--;
    }

    if (hora < 0)
    {
        hora += 24;
        dia--;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
}