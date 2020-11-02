
#include<stdio.h>

int main()
{
    int N,i,count=0;
    scanf("%d",&N);
    while(N !=0 )
    {
        for(i=1;i<=N;i++)
        {
            if(i==N)  printf("%d\n",i);
            else printf("%d ",i);
        }
        scanf("%d",&N);
    }
}
