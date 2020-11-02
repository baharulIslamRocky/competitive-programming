#include<stdio.h>
long long unsigned fib[61];
//int fib[61];
long long unsigned fibo(int);

main(void)
{
    int T,i,N;
    scanf("%d",&T);
    fib[1]=1;
    fib[2]=1;
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        printf("Fib(%d) = %llu\n",N,fibo(N));
    }
}
long long unsigned fibo(int n)
{
    if(n==0) return 0;
    if(fib[n] != 0 ) return fib[n];
    if(n==1 || n==2) return fib[n];
    fib[n]=fibo(n-1)+fibo(n-2);
    return fib[n];
}
