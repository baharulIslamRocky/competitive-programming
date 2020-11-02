#include<stdio.h>
int main()
{
    int pa,pb,i,N,count=1;
    int c1,c2;
    float g1,g2;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N>3000) break;
        scanf("%d %d %f %f",&pa,&pb,&g1,&g2);
        pa=pa+pa*g1/100;
        pb=pb+pb*g2/100;
        while(pa<=pb)
        {
            count++;
            pa=pa+pa*g1/100;
            pb=pb+pb*g2/100;
            //printf("count= %d pa= %d pb= %d\n ",count,pa,pb);
             if(count>100)
            {

                printf("Mais de 1 seculo.\n");
                break;

            }
        }

        if(count<101)
        {
            printf("%d anos.\n",count);
            count=1;

        }
        else count=1;





    }
}
