
#include<stdio.h>

int main()
{
    int i,N,mult=1;
    scanf("%d",&N);

    while(N<0 && N>13)
    {
        return 0;
    }
    mult=N;
    for(i=N-1;i>=1;i--)
    {
        mult = mult *i;
        // printf("%d\n",mult);
    }
    printf("%d\n",mult);
}
