#include<stdio.h>

long long unsigned   fibo(int);


main(void)
{
    int i,T,N;


    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        printf("Fib(%d) = %llu\n",N,fibo(N));
    }


    return 0;
}
long long unsigned fibo(int n)
{
    if(n==0 || n==1) return n;

    else return fibo(n-1)+fibo(n-2);
}
