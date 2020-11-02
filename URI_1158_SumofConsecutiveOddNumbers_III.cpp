#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,X,Y,sum=0;
    cin>>N;
    for(int i =1;i<=N;i++)
    {
        cin>>X>>Y;
        if(X%2==0) X++;
        for(int j=1;j<=Y;j++,X+=2) sum+=X;
        cout<<sum<<endl;
        sum=0;

    }
}
