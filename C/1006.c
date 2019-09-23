#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,media = 0.0,soma = 0.0;
    scanf("%lf %lf %lf",&a,&b,&c);
    soma = soma +(a*2)+(b*3)+(c*5);
    media = soma/10;
    printf("MEDIA = %.1lf\n",media);
    return 0;
}
