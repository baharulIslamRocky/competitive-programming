
#include<stdio.h>
void sal(float r, int s)
{
    float t=(r*s)/100;
    r=r+t;
    printf("Novo salario: %.2f\n",r);
    printf("Reajuste ganho: %.2f\n",t);
    printf("Em percentual: %d %%\n",s);
}
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0 && a<= 400.00)
    {
        sal(a,15);
    }
    else if(a>=400.01 && a<= 800.00)
    {
        sal(a,12);
    }
    else if(a>=800.01 && a<= 1200.00)
    {
        sal(a,10);
    }
    else if(a>=1200.01 && a<= 2000.00)
    {
        sal(a,7);
    }
    else if (a>2000.00)
    {
        sal(a,4);
    }
}
