#include<bits/stdc++.h>
using namespace std;


main(void)
{
    char O;
    int count;
    float M[12][12];
    int i,j;
    float sum=0,avr=0;





    cin>>O;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    if(O=='S')

    {
            sum=0;
            count=0;
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    if(j>i)
                    {
                        sum+=M[i][j];
                        count++;
                    }
                }
            }
            printf("%.1f\n",sum);
    }
    else if(O=='M')
    {
        sum=0;
        count=0;
         for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    if(j>i)
                    {
                        sum+=M[i][j];
                        count++;
                    }
                }
            }
            printf("%.1f\n",sum/count);

    }

    return 0;
}
