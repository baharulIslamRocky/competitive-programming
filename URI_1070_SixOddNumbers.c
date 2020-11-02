
#include<stdio.h>
int main()
{
    int X,count=1;
    scanf("%d",&X);
    for(int i =X;count<=6;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
            count++;
        }

    }
}

