#include<stdio.h>
int N[1000];
main(void)
{
    int T;
    int i,j=0;
    scanf("%d",&T);
    for(i=0;i<1000;i++)
    {
        N[i]=j;
        printf("N[%d] = %d\n",i,N[i]);
        j++;
        if(j==T)j=0;


    }
    return 0;

}
