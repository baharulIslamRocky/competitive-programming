
#include<stdio.h>

int main()
{
    float a,b;
    scanf("%f",&a);
    while(a>10.0 || a<0.0)
    {
        printf("nota invalida\n");
        scanf("%f",&a);
    }

    scanf("%f",&b);
    while(b>10.0 || b<0.0)
    {
        printf("nota invalida\n");
        scanf("%f",&b);
    }
    printf("media = %.2f\n",(a+b)/2);


}
