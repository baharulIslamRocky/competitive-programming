#include<stdio.h>
//#define size 4
main(void)
{

    int N;

    while(scanf("%d",&N) != EOF )

    {
        if(N<3 || N>69) return 0;
        int size = N-1;
        int matrix[N][N];
           int  i,j,row=0,col=0;
           int in =1,out=size;
           int one=1,two=2,three=3;

        while(size>=0)
        {
            for(col==row;col<=size;col++)

            {
                if(col==row) matrix[row][col]=one;
                else if (col==size) matrix[row][col]=two;
                else matrix[row][col]=three;
            }
            for(col=row+1;col<=size;col++)
            {
                if(col==size)matrix[col][size]=one;
                else matrix[col][size]=three;
            }
            for(col=size-1;col>=row;col--)
            {
                if(col==row) matrix[size][col]=two;
                else matrix[size][col]=three;
            }
            for(col=size-1;col>row;col--)
            {
                matrix[col][row]=three;
            }

            size--;
            row++;

        }
        if(N%2==1)
            {
                matrix[N/2][N/2]=2;

            }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%d",matrix[i][j]);



            }
            printf("\n");
        }


    }


    return 0;
}

