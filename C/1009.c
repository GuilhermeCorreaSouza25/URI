#include<stdio.h>

int main()
{
char nome;
double salario, montante;
double resultado;

scanf("%s",&nome);
scanf("%lf",&salario);
scanf("%lf",&montante);

resultado=(montante*0.15)+salario;

printf("TOTAL = R$ %.2lf\n",resultado);

return 0;
}
