#include <stdio.h>
#include <math.h>

int r(x,y){
int f1;

f1=pow((3*x),2) + pow(y,2);

return f1;
}

int b(x,y){
int f2;
f2= 2*pow(x,2) + pow((5*y),2);

return f2;

}

int c(x,y){
int f3;
f3= -100*x + pow(y,3);

return f3;
}


int main(){
    int n;
    int x;
    int y,i;
    scanf("%d", &n);
    for(i=0;i<n;i++){

        scanf("%d %d", &x,&y);


        if (r(x,y) > b(x,y) && r(x,y)>c(x,y))
            printf("Rafael ganhou\n");

        if ( b(x,y)>c(x,y) &&  b(x,y)>r(x,y))
            printf("Beto ganhou\n");

        if (c(x,y)>r(x,y) &&  b(x,y)<c(x,y))
            printf("Carlos ganhou\n");

    }//fim for
    return 0;
}
