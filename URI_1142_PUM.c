#include<stdio.h>

int main()
{
    int N,i,j,k,l;
    scanf("%d",&N);
    for(i=1,j=1,k=2,l=3;i<=N;i++,j+=4,k+=4,l+=4)
    {
        printf("%d %d %d PUM\n",j,k,l);
    }

    return 0;

}
