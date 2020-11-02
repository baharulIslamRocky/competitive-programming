#include<stdio.h>

int main()
{

    int i,N,temp;
    int first=0;
    int last= 1;
    scanf("%d",&N);

    while(N>0 && N<46)
    {
        printf("%d %d ",first,last);



        for(i=3;i<=N;i++)
        {
            if(i==N)
            {
                printf("%d\n",first+last);
            }
            else
            {
                  printf("%d ",first+last);

                // printf("first = %d");
                temp=first + last;
                first=last;
                last=temp;

            }

        }


        break;
    }
}
