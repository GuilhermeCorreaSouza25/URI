#include<stdio.h>

int main()
{
  int litros;
  float distancia,resultado;

  scanf("%d %f",&litros,&distancia);
  resultado=(litros/distancia);

  printf("%.3f km/l\n",resultado);
  return 0;
}
