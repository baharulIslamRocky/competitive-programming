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
           int in =1,out=size;

        while(size>=0)
        {
            for(col=row,in=1;col<=size;col++,in++)
            {
                matrix[row][col]=in;
            }
            for(col=row+1;col<=size;col++)
            {
                matrix[col][size]=size-col+1;
            }
            for(col=size-1,in=2;col>=row;col--,in++)
            {
                matrix[size][col]=in;
            }
            for(col=size-1,out=in-2;col>row;col--,out--)
            {
                matrix[col][row]=out;
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


