#include<stdio.h>

int main()
{
    int N,j,sum=0;
    scanf("%d",&N);
    int X,Y,temp,i;
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X>Y)
        {
           temp=X;
           X=Y;
           Y=temp;

        }
        for(j=X+1;j<Y;j++)
        {
            if(j%2==1)
            {

                sum=sum+j;
            }
        }
        printf("%d\n",sum);
        sum=0;


    }

}
