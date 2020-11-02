#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int i,X,Y;
    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(Y==0)printf("divisao impossivel\n");
        else
            printf("%.1f\n",(float)X/Y);

    }


}
