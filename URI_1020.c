#include<stdio.h>


int main()
{
    int age,count=0,count_m=0;

    scanf("%d",&age);
    if(age>=365)
    {
        count = age/365;
        printf("%d ano(s)\n",count);
        count=age-count*365;
        if(count>=30)
        {
            count_m = count/30;
            printf("%d mes(es)\n",count_m);
            count = count - count_m*30;

        }
        else printf("0 mes(es)\n");
        printf("%d dia(s)\n",count);
    }
    else
    {
            printf("0 ano(s)\n");
             if(age>=30)
        {
            count_m=age/30;
            printf("%d mes(es)\n",count_m);
            count = age - count_m *30;
            printf("%d dia(s)\n",count);

        }
        else
        {
            printf("0 mes(es)\n");
            printf("%d dia(s)\n",age);
        }

    }




}
