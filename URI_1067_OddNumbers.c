#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    for(int i =1;i<=X;i++)
    {
        if(i%2==1)printf("%d\n",i);
    }
}
