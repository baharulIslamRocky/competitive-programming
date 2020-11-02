#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a,b,r,q;
    cin>>a>>b;
    if(a<0)
    {   int i=a;
        while(a<0)
        {
            a+=b;
            //cout<<a<<endl;
        }

        cout<<(i-(a%b))/b<<" "<<a%b<<endl;
    }
    else cout<<a/b<<" "<<a%b<<endl;

    return 0;
}
