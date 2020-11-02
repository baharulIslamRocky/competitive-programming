#include<stdio.h>

int main()
{
    int A,N,i,sum=0;
    scanf("%d %d",&A,&N);
    while(N<=0)
    {
        scanf("%d",&N);
    }
    for(i = A; i<N+A;i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}
