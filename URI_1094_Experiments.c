#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    char cha,x,y,z;
    int i,amo,rc=0,cc=0,sc=0,total=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d %c",&amo,&cha);
        total +=amo;
        if(cha=='C')
        {
            cc+=amo;
        }
        else if(cha=='R')
        {
            rc+=amo;
        }
        else if(cha=='S')
        {
            sc+=amo;
        }

    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",cc);
    printf("Total de ratos: %d\n",rc);
    printf("Total de sapos: %d\n",sc);
    printf("Percentual de coelhos: %.2f %%\n",(cc*100.00)/total);
    printf("Percentual de ratos: %.2f %%\n",(rc*100.00)/total);
    printf("Percentual de sapos: %.2f %%\n",(sc*100.00)/total);

}
