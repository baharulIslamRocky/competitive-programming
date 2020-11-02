#include<stdio.h>
int main()
{
    int N;
    int count1,count2,count3;
    scanf("%d",&N);
    if(N>=3600)
    {
        count1=N/3600;
        N=N-(count1*3600);


    }
    else count1=0;
    if(N>=60)
    {
        count2=N /60;
        N=N-(count2*60);

    }
    else count2=0;
    if(N>=0) count3=N;
    printf("%d:%d:%d\n",count1,count2,count3);

}
