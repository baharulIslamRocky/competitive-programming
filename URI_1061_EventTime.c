#include<stdio.h>
int main()
{
    char ch1[10],ch2[10];
    int sd,ed,sh,eh,sm,ss,em,es;
    //printf("Dia ");
    scanf("%s %d",ch1,&sd);
    scanf("%d : %d : %d",&sh,&sm,&ss);

   // printf("Dia ");
    scanf("%s %d",ch2,&ed);
    scanf("%d : %d : %d",&eh,&em,&es);

    int rd=ed-sd;
    int rh=eh-sh;
    int rm=em-sm;
    int rs =es-ss;

    if(rh<0)
    {
        rd--;
        rh=24+rh;
    }
    if(rm<0)
    {
        rh--;
        if(rh<0)
        {
            rd--;
            rh=24+rh;
        }
        rm=60+rm;

    }
    if(rs<0)
    {
        if(rm==0)
        {
            rh--;
            if(rh<0)
            {
                rd--;
                rh=24+rh;
            }
            rm=60+rm;

        }
        rm--;

        rs=60+rs;
    }
    printf("%d dia(s)\n",rd);
    printf("%d hora(s)\n",rh);
    printf("%d minuto(s)\n",rm);
    printf("%d segundo(s)\n",rs);




}

