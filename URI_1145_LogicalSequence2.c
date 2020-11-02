#include<stdio.h>

int main()
{
    int i,X,Y;
    int count=0;
    scanf("%d %d",&X,&Y);
    for(i=1;i<=Y;i++)
    {

        count++;
        if(count==X)
        {
            printf("%d\n",i);
            count=0;

        }
        else printf("%d ",i);
    }
    return 0;
}
