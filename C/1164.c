#include <stdio.h>

void main(){
  int n, x, i, s = 0, j;

  scanf("%d\n", &n);
  for ( i = 0; i < n; i++) {
    scanf("%d", &x);
    if (x%2!=0) {
      printf("%d nao eh perfeito\n", x);
    }
    else if (x%2 == 0){
      for(j=1; j<=(x/2); j++){
        if(x%j==0){
          s+=j;
        }
      }
      if(s==x){
        printf("%d eh perfeito\n", x);
      }
      else{
        printf("%d nao eh perfeito\n", x);
      }
      s = 0;
    }
  }

}
