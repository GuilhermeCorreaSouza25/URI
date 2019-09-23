#include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,limite,i;
a=1;
b=2;
c=3;
scanf("%d",&limite);
printf("%d %d %d PUM\n",a,b,c);

for(i=1;i<limite;i++){
a=a+4;
b=b+4;
c=c+4;
printf("%d %d %d PUM\n",a,b,c);
}
return 0;
}
