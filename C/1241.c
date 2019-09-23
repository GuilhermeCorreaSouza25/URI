#include <stdio.h>
#include <string.h>
int main(){
    int n,ta,tb,i,x,d;
    int c=0;
    char a[1001];
    char b[1001];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        d=0;
        x=0;
        scanf("%s %s",a,b);

        ta = strlen(a);
        tb = strlen(b);
        c = tb;
        ta--;
        tb--;

        if (ta >= tb){
            while (x<c){
                if (a[ta] == b[tb]){
                    d++;
                }//fim if
                x++;
                ta--;
                tb--;
            }//fim while
        }
        if(d==c){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }//fim for
return 0;
}
