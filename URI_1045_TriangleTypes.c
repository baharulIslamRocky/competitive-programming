
#include<stdio.h>

int main()
{
    double A,B,C,temp;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>B && A>C)
    {
        if(C>B)
        {
            temp = B;
            B=C;
            C= temp;

        }
    }
    else if(B>A && B>C)
    {
        temp = A;
        A=B;
        B= temp;

        if(C>B)
        {
            temp = B;
            B=C;
            C= temp;

        }
    }
    else if(C>A && C>B)
    {
        temp = A;
        A=C;
        C= temp;

        if(C>B)
        {
            temp = B;
            B=C;
            C= temp;

        }
    }
    if(A >= B+C) printf("NAO FORMA TRIANGULO\n");
    else
    {
          if(A*A == (B*B + C*C)) printf("TRIANGULO RETANGULO\n");
    if(A*A > (B*B + C*C)) printf("TRIANGULO OBTUSANGULO\n");
    if(A*A < (B*B + C*C)) printf("TRIANGULO ACUTANGULO\n");
    if(A==B && B==C && C ==A)printf("TRIANGULO EQUILATERO\n");
    if(A==B || B==C || C ==A)
       {
           if(A==B && B!=C && C !=A ) printf("TRIANGULO ISOSCELES\n");
           else if(A!=B && B==C && C !=A ) printf("TRIANGULO ISOSCELES\n");
           else if(A!=B && B!=C && C == A ) printf("TRIANGULO ISOSCELES\n");

       }
    }




}
