#include<stdio.h>

main(void)
{
    int N[10],i;
    scanf("%d",&N[0]);
    for(i=1;i<10;i++)
    {
        N[i]=N[i-1]*2;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;

}
