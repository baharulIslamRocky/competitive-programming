
#include<stdio.h>

int main()
{
    int M,N,i,temp,sum=0;
    scanf("%d %d",&M,&N);
    while(M>0 && N>0)
    {

          if(M>N)
        {
           temp=M;
           M=N;
           N=temp;
        }
        for(i=M;i<=N;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
        scanf("%d %d",&M,&N);

    }
}
