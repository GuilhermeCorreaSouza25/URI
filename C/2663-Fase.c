#include <stdio.h>
int compara(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n,k,cont = 0,resultado = 0,i = 0,j = 0;
    scanf("%d %d",&n,&k);
    int p[n];

    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }

    qsort(p,n,sizeof(int),compara);

    for(j=(n-1);j>=0;j--){
        cont++;
        if(cont<k || cont==k){
            resultado++;
        }
        else if (p[j]==p[j+1])
            resultado++;
        else
            break;
    }
printf("%d\n",resultado);


return 0;
}
