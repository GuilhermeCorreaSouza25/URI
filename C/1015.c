#include<stdio.h>
#include<math.h>

int main()
{
  float x1,x2,y1,y2,r1,r2,soma,distancia;
  scanf("%f %f",&x1,&y1);
  scanf("%f %f",&x2,&y2);
  r1=pow(x2-x1,2);
  r2=pow(y2-y1,2);
  soma = r1+r2;
  distancia=sqrt(soma);
  printf("%.4f\n",distancia);
  return 0;
}
