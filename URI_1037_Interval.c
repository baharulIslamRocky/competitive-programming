#include<stdio.h>
int main()
{
    float a;//b=4.111111;
    //scanf("%f",&a);
    //printf("a = %f\t b=%f\n",a,b);
    scanf("%f",&a);
    if(a>=0.000000 && a<=100.000000)
    {
        if(a>=0.0 && a<=25.000000) printf("Intervalo [0,25]\n");
        else if(a>=25.000001 && a<=50.000000) printf("Intervalo (25,50]\n");
        else if(a>=50.000001 && a<=75.000000) printf("Intervalo (50,75]\n");
        else if(a>=75.000001 && a<=100.000000) printf("Intervalo (75,100]\n");

    }
    else
        printf("Fora de intervalo\n");

}
