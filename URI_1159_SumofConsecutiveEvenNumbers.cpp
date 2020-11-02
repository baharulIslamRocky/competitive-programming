#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X,i,sum=0;
    cin>>X;
    while(X!=0)
    {
        if(X>0)
        {
            if(X%2==1) X++;
        for( i =1;i<=5;i++,X+=2) sum+=X;
        cout<<sum<<endl;
        sum=0;
        cin>>X;
        }
        else
        {
            if(X%2==-1) X++;
            for(i=1;i<=5;i++,X+=2) sum+=X;
            cout<<sum<<endl;
            sum=0;
            cin>>X;

        }


    }
    return 0;

}

