#include<stdio.h>
//int mat[102][102];
int main(void)
{
    int N;
    while (scanf("%d",&N) != EOF)
    {
        int j,i,center=N/2;
        int mat[102][102];
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
              if(i==j) mat[i][j]=2;
              else if(i+j==N-1)mat[i][j]=3;
              else mat[i][j]=0;


            }
        }
        for(i=N/3;i<N-(N/3);i++)
        {
            for(j=N/3;j<N-(N/3);j++)
            {
                mat[i][j]=1;
            }
        }
        mat[center][center]=4;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
              printf("%d",mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}
