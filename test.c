#include<stdio.h>

main(void)
{
    int n,digit=0;
    scanf("%d",&n);
    while (n>0)
    {
        n/=10;
        digit++;
    }
    printf("%d",digit);
    return 0;
}
