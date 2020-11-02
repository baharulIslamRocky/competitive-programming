
#include<stdio.h>

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);

    while(X!=0 && Y !=0)
    {
        if(X>0 && Y>0) printf("primeiro\n");
        else if(X>0 && Y<0) printf("quarto\n");
        else if(X<0 && Y<0) printf("terceiro\n");
        else if(X<0 && Y>0) printf("segundo\n");
        scanf("%d %d",&X,&Y);

    }
}
