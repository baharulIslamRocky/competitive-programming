#include<stdio.h>

int main()
{
    int s,e;
    scanf("%d %d",&s,&e);
    if(s==e) printf("O JOGO DUROU %d HORA(S)\n",24);
    else if(e<s)
    {
        s= 24-s;
        printf("O JOGO DUROU %d HORA(S)\n",e+s);
    }
    else printf("O JOGO DUROU %d HORA(S)\n",e-s);

}
