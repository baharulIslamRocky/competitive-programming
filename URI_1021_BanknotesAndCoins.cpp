#include<stdio.h>
int main()
{
    double N;
    scanf("%lf",&N);
    if(N>=0 &&N<=1000000.00)
    {
        printf("NOTAS:\n");
        int ft=(int)N/100;
        printf( "%d nota(s) de R$ 100.00\n",ft);

         ft=(int)N%100/50;
        printf( "%d nota(s) de R$ 50.00\n",ft);

        ft=(int)N%100%50/20;
        printf( "%d nota(s) de R$ 20.00\n",ft);

        ft=(int)N%100%50%20/10;
        printf( "%d nota(s) de R$ 10.00\n",ft);

        ft=(int)N%100%50%20%10/5;
        printf( "%d nota(s) de R$ 5.00\n",ft);

        ft=(int)N%100%50%20%10%5/2;
        printf( "%d nota(s) de R$ 2.00\n",ft);
        printf("MOEDAS:\n");

        ft=(int)N%100%50%20%10%5%2/1;
        printf( "%d nota(s) de R$ 1.00\n",ft);

        ft=(int)N%100%50%20%10%5%2%1/0.500000;
        printf( "%d nota(s) de R$ 0.50\n",ft);

        //ft=N%100%50%20%10%5%2%1%.500000/.250000;
       // printf( "%d nota(s) de R$ 0.25\n",ft);

        /*ft=(int)N%100%50%20%10%5%2%1%0.50%0.25/0.10;
        printf( "%d nota(s) de R$ 0.10\n",ft);

        ft=(int)N%100%50%20%10%5%2%1%0.50%0.25%0.10/0.05;
        printf( "%d nota(s) de R$ 0.05\n",ft);

        ft=(int)N%100%50%20%10%5%2%1%0.50%0.25%0.10%0.05/0.01;
        printf( "%d nota(s) de R$ 0.01\n",ft);*/








    }
    else return 0;

}
