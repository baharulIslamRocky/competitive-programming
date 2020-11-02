
#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    int i,temp,sum=0;
    if(X>Y)
    {
        temp = X;
        X=Y;
        Y = temp;
    }
    for(i=X;i<=Y;i++)
    {
        if(i % 13 != 0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}
