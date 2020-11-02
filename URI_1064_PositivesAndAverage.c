#include<stdio.h>

int main()
{
    float a[7];
    int count=0;
    float sum=0.0;
    int i;
    for(i =1;i<=6;i=i+1)
    {
        scanf("%f",&a[i]);
        if(a[i]>0.0)
        {
            count++;
            sum+=a[i];
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);

}
