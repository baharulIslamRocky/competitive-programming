#include<stdio.h>
#include<math.h>

int main()
{
    int L,V,i;
    while (scanf("%d",&L) != EOF)
    {
        int max=0;
        for(i=1;i<=L;i++)
        {
            scanf("%d",&V);
            if(max<V) max=V;


        }
        if(max<10) printf("1\n");
        else if(max>=10 && max<20) printf("2\n");
        else if (max>=20) printf("3\n");

    }


    return 0;
}
