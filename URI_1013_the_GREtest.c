#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    int ab,bc,ca;
    ab=(a+b+abs(a-b))/2;
    bc=(b+c+abs(b-c))/2;
    ca=(c+a+abs(c-a))/2;
    if(ab>bc)
    {
        if(ab>ca) printf("%d eh o maior\n",ab);
        else printf("%d eh o maior\n",ca);
    }
    else
    {
        if(bc>ca) printf("%d eh o maior\n",bc);
        else printf("%d eh o maior\n",ca);

    }




    return 0;
}
