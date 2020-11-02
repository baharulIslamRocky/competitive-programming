#include<stdio.h>

int main()
{
    int X,Z,count=0, sum=0;
    scanf("%d",&X);
    scanf("%d",&Z);
    while(Z<=X)
    {
        scanf("%d",&Z);

    }
    while(sum<=Z)
    {
        count++;
        sum+=X;
        X++;
    }
    printf("%d\n",count);
}
