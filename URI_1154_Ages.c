#include<stdio.h>
int main()
{
    int sum=0,N,i=0;
    scanf("%d",&N);
    while(N>=0)
    {
        i++;
        sum =sum+N;
        scanf("%d",&N);

    }
    printf("%.2f\n",(float) sum/i);
}
