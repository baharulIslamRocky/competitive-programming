#include<stdio.h>
int N[100];
main(void)
{
    int i;
    double X;
    scanf("%lf",&X);
    for(int i = 0;i<100;i++)
    {
        N[i]=X;
        printf("N[%d] = %.4lf\n",i,X);
        X/=2;
    }


    return 0;
}

