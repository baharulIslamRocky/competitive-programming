#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

main(void)
{
    char T;
    float M[12][12];
    int i,j;
    float sum=0,avr=0;
    int C;



    cin>>C;
    cin>>T;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>M[i][j];
        }
    }
    if(T=='S')
    {
            for(i=0;i<12;i++)
            {
                sum+=M[i][C];
            }
            printf("%.1f\n",sum);
    }
    else if(T=='M')
    {
        sum=0;
         for(i=0;i<12;i++)
            {
                sum+=M[i][C];
            }
            //cout<<setprecision(1)<<sum/12.0;
            printf("%.1f\n",sum/12);

    }
    return 0;
}


