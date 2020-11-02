#include<stdio.h>

int main()
{
    int  N;
    int nota;
    scanf("%d",&N);
    printf("%d\n",N);
    if(N<1 || N>999999) return 0;
    if(N>=100)
    {
        nota=N/100;
        N=N-(nota*100);
        printf("%d nota(s) de R$ 100,00\n",nota);

    }
    else printf("0 nota(s) de R$ 100,00\n");
    if(N>=50)
    {
        nota=N/50;
        N=N-(nota*50);
        printf("%d nota(s) de R$ 50,00\n",nota);
    }
    else printf("0 nota(s) de R$ 50,00\n");
    if(N>=20)
    {
        nota=N/20;
        N=N-(nota*20);
        printf("%d nota(s) de R$ 20,00\n",nota);
    }
    else printf("0 nota(s) de R$ 20,00\n");
     if(N>=10)
    {
        nota=N/10;
        N=N-(nota*10);
        printf("%d nota(s) de R$ 10,00\n",nota);
    }
    else printf("0 nota(s) de R$ 10,00\n");
     if(N>=5)
    {
        nota=N/5;
        N=N-(nota*5);
        printf("%d nota(s) de R$ 5,00\n",nota);
    }
    else printf("0 nota(s) de R$ 5,00\n");
       if(N>=2)
    {
        nota=N/2;
        N=N-(nota*2);
        printf("%d nota(s) de R$ 2,00\n",nota);

    }
    else printf("0 nota(s) de R$ 2,00\n");
       if(N>=1)
    {
        nota=N/1;
        N=N-(nota*1);
        printf("%d nota(s) de R$ 1,00\n",nota);
    }
    else printf("0 nota(s) de R$ 1,00\n");

}
