
#include<stdio.h>

main(void)
{
    int r1,r2,T,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%d %d",&r1,&r2);
        printf("%d\n",r1+r2);
        i++;
    }

    return 0;
}
