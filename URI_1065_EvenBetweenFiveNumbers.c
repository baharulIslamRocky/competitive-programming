
#include<stdio.h>

int main()
{
    int a[7];
    int count=0;
    int i;
    for(i =1;i<=5;i=i+1)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
}
