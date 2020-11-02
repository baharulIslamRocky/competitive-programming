#include<bits/stdc++.h>

using namespace std;

int main(){

int a,b,c,q,r;

cin>>a>>b;

if(a>=-1000&&b<1000){

    c=a;

    while(a<0){

        a+=b;

    }

    r=a%b;

    q=(c-r)/b;

    cout<<q<<" "<<r<<endl;

}

return 0;

}
