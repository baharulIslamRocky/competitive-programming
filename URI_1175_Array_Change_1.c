
#include<stdio.h>

main(void)
{
    int N[20],i,j,temp;
    for(i=0;i<20;i++) scanf("%d",&N[i]);
    for(i=0,j=20-1;i<20/2;i++,j--)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(i=0;i<20;i++) printf("N[%d] = %d\n",i,N[i]);
}
