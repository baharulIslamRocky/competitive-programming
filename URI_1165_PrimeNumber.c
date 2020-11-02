#include<stdio.h>

int main()
{
    int i,j, N,X,flag=0;
    scanf("%d",&N);
    for( j=1;j<=N;j++)
    {

        scanf("%d",&X);
        flag=0;
        if(X==2)
        {
            printf("%d eh primo\n",2);
        }
        else if(X%2==0)
        {
            printf("%d nao eh primo\n",X);
        }
        else if(X%2==1)
        {

                for(i=3;i<=X/2;i+=2)
            {
                if(X%i==0)
                {
                    printf("%d nao eh primo\n",X);
                    flag=1;
                    break;
                }


            }
            if(flag==0) printf("%d eh primo\n",X);
        }
        else printf("%d eh primo\n",X);




    }


}
