#include<stdio.h>

int main()
{
    int N;
    int X;
    scanf("%d",&N);
    for(int i=1; i<=N;i++)
    {
        scanf("%d",&X);
        if(X==0) printf("NULL\n");
        else if(X%2==0 )
        {
            if(X>0) printf("EVEN POSITIVE\n");
            else printf("EVEN NEGATIVE\n");
        }
        else if(X%2==1 || X%2==-1)
        {
            if(X>0) printf("ODD POSITIVE\n");
            else printf("ODD NEGATIVE\n");
        }
    }

}
