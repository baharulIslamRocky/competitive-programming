#include<stdio.h>

int main()
{
    double j;
    double i;
    int n;

    for(i=0;i<=2.1;i=i+.2)
    {
        for(j=1;j<=3;j++)
        {
            n=(i+j)*10;

            //printf("n= %d\n",n);
            if(n%10==0) printf("I=%.0lf J=%.0lf\n",i,i+j);
            else printf("I=%.1lf J=%.1lf\n",i,i+j);
        }
    }
    return 0;
}
