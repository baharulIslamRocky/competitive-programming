#include<stdio.h>
//#define size 4
main(void)
{

    int N;
    scanf("%d",&N);
    while(N>0)

    {
        int size = N-1;
        int matrix[N][N];
           int  i,j,row=0,col=0;
        while(size>=0)
        {
            for(col=row;col<=size;col++)
            {

                matrix[row][col]=row+1;
            }
            for(col=row+1;col<=size;col++)
            {
                matrix[col][size]=row+1;
            }
            for(col=size-1;col>=row;col--)
            {
                matrix[size][col]=row+1;
            }
            for(col=size-1;col>row;col--)
            {
                matrix[col][row]=row+1;
            }
            size--;
            row++;

        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%3d",matrix[i][j]);
                if(j<N-1) printf(" ");


            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&N);
    }


    return 0;
}

