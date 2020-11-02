#include<stdio.h>

main(void)
{
    int i,N,min=0,flag;
    scanf("%d",&N);
    int X[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&X[i]);
        if(X[i]<=min) flag= i;

    }
    printf("Menor valor: %d\n",X[flag]);
    printf("Posicao: %d\n",flag);

    return 0;
}
