#include<stdio.h>
#include<math.h>


int main()
{
    float a,b,c;
    float R1,R2;
    scanf("%f %f %f",&a,&b,&c);

    float  d = pow(b,2)-(4*a*c);

    if(a==0 || d <0 )
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = ((-b)+sqrt(d))/ (2 *a );
        printf("R1 = %.5f\n",R1);
        R2 = ((-b)-sqrt(d))/ (2 *a );
        printf("R2 = %.5f\n",R2);


    }

}
