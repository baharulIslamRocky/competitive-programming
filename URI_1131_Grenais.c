
#include<stdio.h>

int main()
{
    int in,gr,match=0,draw=0,in_win=0,gr_win=0;
    int repeat;
    do
    {
        scanf("%d",&in);
        //printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&gr);
        //printf("Novo grenal (1-sim 2-nao)\n");
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&repeat);

        match++;
        if(in==gr) draw++;
        else if (in>gr) in_win++;
        else if(in<gr) gr_win++;
    }
    while(repeat==1);

    printf("%d grenais\n",match);
    printf("Inter:%d\n",in_win);
    printf("Gremio:%d\n",gr_win);
    printf("Empates:%d\n",draw);

    if(in_win> gr_win) printf("Inter venceu mais\n");
    else if(in_win<gr_win) printf("Gremio venceu mais\n");
    else if(in_win==gr_win) printf("Nao houve vencedor\n");





}
