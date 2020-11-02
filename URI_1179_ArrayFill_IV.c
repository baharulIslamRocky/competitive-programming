#include<stdio.h>
int par[5];
int impar[5];
main(void)
{
    int i,n,j=0,k,l=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            par[j] = n;
            j++;
            if(j==5)
            {
                for(k=0;k<5;k++)
                {
                    printf("par[%d] = %d\n",k,par[k]);
                }
                j=0;
            }
        }
        else
        {
            impar[l] = n;
            l++;
            if(l==5)
            {
                for(k=0;k<5;k++)
                {
                    printf("impar[%d] = %d\n",k,impar[k]);
                }
                l=0;
            }

        }

    }
    for(k=0;k<l;k++)
    {
        printf("impar[%d] = %d\n",k,impar[k]);
    }
    for(k=0;k<j;k++)
    {
        printf("par[%d] = %d\n",k,par[k]);
    }

    return 0;
}

