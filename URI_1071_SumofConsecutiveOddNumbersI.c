
#include<stdio.h>
int main()
{
    int x ,y,temp;
    scanf("%d",&x);
    scanf("%d",&y);
    int sum=0;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;

    }
    for(int i =x+1;i<y;i++)
    {

        if(i%2==1 || i%2==-1)
        {
            sum=sum+i;

        }
    }
    printf("%d\n",sum);
}
