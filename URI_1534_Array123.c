
#include<stdio.h>

main(void)
{
    int i,j,N;
    int col,row=1;
    scanf("%d",&N);
    int size = N;
    int Matrix[N][N];
    //while(N>0)
    //{
        while(N>0)
        {
            for(col=row;col<=N;col++)
            {
                Matrix[row][col]= row;
            }

            for(col=row+1;col<=N;col++)
            {
                Matrix[col][N]= row;
            }
            for(col=N-1;col>=row;col-- )
             {
                Matrix[N][col]= row;
             }
            for(col=N-1;col>row;col--)
            {
                Matrix[col][row]= row;
            }



        }

            for(i=1;i<=size;i++)
            {
                for(j=1;j<=size;j++)
                {
                    printf("%3d",Matrix[i][j]);
                    if(j<size) printf(" ");
                }
                printf("\n");

            }
            printf("\n");
            scanf("%d",&N);


    //}



    return 0;
}
