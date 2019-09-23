/*
Guilherme Corrêa Souza - 3509
uri judge
Exercicio 1021
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){
 	double n = 3.14159;
 	double raio,area;

 	scanf("%lf",&raio);
 	raio = pow(raio,2);
 	area = raio*n;
 	printf("A=%.4lf\n",area);
 	return 0;
}
