#include<stdio.h>
//#define size 4
main(void)
{

    int bigVal,i,j,l, N;
    scanf("%d",&N);
    while(N>0)

    {
        int size = N-1,digit=0;
        int matrix[N][N];
           int  k,row=0,col=0;
           int in =1,out=size;

        for(i=0,k=1;i<N;i++,k*=2)
        {
            for(j=0,l=1;j<N;j++,l*=2)
            {
                matrix[i][j]=(l*k);
            }
        }

        bigVal=matrix[N-1][N-1];
        while (bigVal>0)
        {
            bigVal/=10;
            digit++;
        }


        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%*d",digit,matrix[i][j]);
                if(j<N-1) printf(" ");


            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&N);


    }

    return 0;
}



