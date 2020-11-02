#include<stdio.h>

int main()
{
    int sh,sm,eh,em,res;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sh==eh && sm == em)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
    }
    else if(sh>eh)
    {
        sh= (24-sh)+eh;
        res=sh*60+(em-sm);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",res/60,res%60);

    }
    else
    {
        sh= eh-sh;
        res=sh*60+(em-sm);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",res/60,res%60);
    }

}
