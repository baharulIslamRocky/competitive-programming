/*sometime in type cast or subtraction we loss some value so if
we .129*100 then */


#include<stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
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
        printf( "%d moeda(s) de R$ 1.00\n",ft);

        /*int i =(int)N;
        float f = N-i;
       // printf("foat = %f\n",f);
        float g = f*100;
        i = (int)g;
        int h = f*1000;
       // printf("type cast i = %d",i);
        if( h%10 >=5)
        {
            i++;
            //printf("i++ = %d",i);
        }*/
        //amother rule
          N = N*100;
          int i = (int) N;
          i = i%100;
          //printf("i = %d",i);


        ft= i/50;
        //printf("i = %d\n",i);
        printf( "%d moeda(s) de R$ 0.50\n",ft);
        ft= i%50/25;
        printf( "%d moeda(s) de R$ 0.25\n",ft);
        ft= i%50%25/10;
        printf( "%d moeda(s) de R$ 0.10\n",ft);
        ft= i%50%25%10/5;
        printf( "%d moeda(s) de R$ 0.05\n",ft);
        ft= i%50%25%10%5/1;
        printf( "%d moeda(s) de R$ 0.01\n",ft);


        //printf("i  = %d ",i);

}

