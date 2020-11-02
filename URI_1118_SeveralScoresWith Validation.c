
#include<stdio.h>

int main()
{
     int X;
    float a,b;
    scanf("%f",&a);
    while(a< 0.0 || a>10.0)
    {
        printf("nota invalida\n");
        scanf("%f",&a);
    }

    scanf("%f",&b);
    while(b< 0.0 || b>10.0)
    {
        printf("nota invalida\n");
        scanf("%f",&b);
    }
    printf("media = %.2f\n",(a+b)/2);

    scanf("%d",&X);
    printf("novo calculo (1-sim 2-nao)\n");
    while(X!=2 && X !=1)
    {

        scanf("%d",&X);
        printf("novo calculo (1-sim 2-nao)\n");

    }


   while(X==1)
    {
        scanf("%f",&a);
        while(a< 0.0 || a>10.0)
        {
            printf("nota invalida\n");
            scanf("%f",&a);
        }

        scanf("%f",&b);

        while(b< 0.0 || b>10.0)
        {
            printf("nota invalida\n");
            scanf("%f",&b);
        }
        printf("media = %.2f\n",(a+b)/2);

        scanf("%d",&X);
        printf("novo calculo (1-sim 2-nao)\n");

        while(X!=2 && X != 1)
        {

            scanf("%d",&X);
            printf("novo calculo (1-sim 2-nao)\n");

        }




    }



}
