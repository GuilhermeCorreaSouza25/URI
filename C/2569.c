/*Guilherme Correa Souza - 3509
Aryel Penido - 3500
UFV-Campus Florestal*/

int sete(int a){
  int ans = a,pot =1;
  while(a!=0){
    if(a%10 == 7){
      ans -= 7*pot;
    }
    pot*=10;
    a /=10;
  }
  return ans;
}

int main(){
  int a,b, resultado;
  char op;


  scanf("%d %c %d", &a,&op,&b);
  a = sete(a);
  b = sete(b);

  if (op == 'x'){
    resultado = a*b;
  }
  else
    resultado = a+b;

  printf("%d\n",sete(resultado));
return 0;
}
