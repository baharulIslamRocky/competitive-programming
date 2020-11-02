#include<stdio.h>

int main()
{
    float a[7];
    int count=0;
    int i;
    for(i =1;i<=6;i=i+1)
    {
        scanf("%f",&a[i]);
        if(a[i]>0.0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);

   /* int a,b,c,d,e,f,count=0;
    scanf("%d",&a);
    if(a>0) count++;

    scanf("%d",&b);
    if(b>0) count++;

    scanf("%d",&c);
    if(c>0) count++;

    scanf("%d",&d);
    if(d>0) count++;

    scanf("%d",&e);
    if(e>0) count++;

    scanf("%d",&f);
    if(f>0) count++;
    printf("%d valores positivos\n",count);*/

}
