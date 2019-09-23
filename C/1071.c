#include <stdio.h>

void main(){
  int i, x, y, soma = 0, aux, it;

  scanf("%d",&x);
  scanf("%d",&y);
  if(x<y){
    aux = x;
    x = y;
    y = aux;
  }
  for(i = y+1; i<x; i++){
    it = i;
    if (i<0) {
      it = i*(-1);
    }
    if (it%2 == 1) {
      soma+=i;
    }
  }
  printf("%d\n", soma);
}
