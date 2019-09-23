#include<stdio.h>
#include<math.h>

int main()
{
int n,PA,PB,anos,i;
float G1,G2;

scanf("%d",&n);
anos=0;
for(i=0;i<n;i++){
    scanf("%d %d %f %f",&PA,&PB,&G1,&G2);

    anos=0;
    while(PA<=PB)
    {

        PA+=(PA*(G1/100));
        PB+=(PB*(G2/100));
        anos++;

        if (anos > 100){
        printf("Mais de 1 seculo.\n");
        break;
        }//fim if
    }
    if(anos<=100){
    printf("%d anos.\n",anos);
    }//fim if
}//fim for
return 0;
}
