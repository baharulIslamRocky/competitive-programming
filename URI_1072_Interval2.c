
#include<stdio.h>

int main()
{
    int N;
    int count1=0,count2=0;
    int X;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20) count1++;
        else count2++;

    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
    return 0;
}
