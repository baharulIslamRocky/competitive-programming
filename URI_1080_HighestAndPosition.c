#include<stdio.h>

int main()
{
    int i,flag=0 ,max=0,num;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
            flag=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",flag);
    return 0;
}
