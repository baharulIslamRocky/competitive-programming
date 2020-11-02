#include<stdio.h>
int main()
{

    int i,j;
    float s=0.0,res=0.0;
    for(i=1,j=1;i<=39;i+=2,j*=2)
    {
        res=(float)i/j;
        s=s+res;
    }
    printf("%.2f\n",s);

}
