#include<stdio.h>

int main()
{
    float a,b;
    scanf("%f",&a);
    if(a<=2000.00) printf("Isento\n");

    else if(a-2000 >0 )
    {
         a=a-2000;
         if(a<1000.1)
         {
             printf("R$ %.2f\n",(a*8)/100);
         }
         else
         {
             b=(1000*8)/100;
             if(a-1000<1500.01)
             {
                 a=a-1000;
                 b= b+ a*18/100;
                 printf("R$ %.2f\n",b);
             }
             else
                {
                    b=b+1500*18/100;
                    a=a-1000-1500;
                    b=b+a*28/100;
                    printf("R$ %.2f\n",b);
                }

         }

    }

   /* double a,b;
    scanf("%lf", &a);
    if(a>=0 && a<=2000)
        printf("Isento\n");
    else if(a>=2000.01 && a<=3000)
    {
        a-=2000;
        b= a*.08;
        printf("R$ %.2lf\n",b);
    }
    else if(a>=3000.01 && a<=4500)
    {
        a-=3000;
        b= a*.18+80;
        printf("R$ %.2lf\n",b);
    }
    else
    {
        a-=4500;
        b= a*.28+350;
        printf("R$ %.2lf\n",b);
    }*/
}
