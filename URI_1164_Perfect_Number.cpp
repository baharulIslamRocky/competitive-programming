
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,sum=0;
    cin>>N;


        for(int j =1;j<=N;j++)
        {
            if(N>100) break;
            cin>>X;

            for(int i=1;i<=X/2;i++)
            {
                if(X%i==0)
                {
                    sum+=i;
                }
            }
            if(sum==X) printf("%d eh perfeito\n",X);
            else printf("%d nao eh perfeito\n",X);
            sum=0;
        }


}

