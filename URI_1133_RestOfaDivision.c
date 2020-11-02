
#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    int i,temp;
    if(X>Y)
    {
        temp = X;
        X=Y;
        Y = temp;
    }
    for(i=X;i<Y;i++)
    {
        if(i % 5 ==2 || i%5 ==3)
        {
            printf("%d\n",i);
        }
    }

}
