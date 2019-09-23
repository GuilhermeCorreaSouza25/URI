#include <stdio.h>
int main(){

int codigo;
int quantidade;
float valor;

scanf("%d %d",&codigo,&quantidade);

switch(codigo){

case 1: valor = 4.00*quantidade;
   printf("Total: R$ %.2f\n",valor);
break;

case 2: valor = 4.50*quantidade;
   printf("Total: R$ %.2f\n",valor);
break;

case 3: valor = 5.00*quantidade;
   printf("Total: R$ %.2f\n",valor);
break;

case 4: valor = 2.00*quantidade;
   printf("Total: R$ %.2f\n",valor);
break;

case 5: valor = 1.50*quantidade;
   printf("Total: R$ %.2f\n",valor);
break;

return 0;
}

}
