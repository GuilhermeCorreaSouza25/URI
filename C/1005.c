#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,media = 0.0,soma = 0.0;
    scanf("%lf%lf",&a,&b);
    soma = soma +(a*3.5)+(b*7.5);
    media = soma/11;
    printf("MEDIA = %.5lf\n",media);
    return 0;
}
