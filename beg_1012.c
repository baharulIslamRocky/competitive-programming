#include<stdio.h>
double calculate_TRIANGULO(double A,double C)
{
    return .5*A*C;
}
double calculate_CIRCULO(double C)
{
    double pi=3.14159;
    return pi*C*C;
}
double calculate_TRAPEZIO(double A,double B,double C)
{
    return .5*(A+B)*C;
}
double calculate_QUADRADO(double B)
{
    return B*B;
}
double calculate_RETANGULO(double A,double B)
{
    return A*B;
}
int main()
{
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf %lf %lf",&A,&B,&C);
    TRIANGULO=  calculate_TRIANGULO(A,C);
    CIRCULO= calculate_CIRCULO(C);
    TRAPEZIO=calculate_TRAPEZIO(A,B,C);
    QUADRADO=calculate_QUADRADO(B);
    RETANGULO=calculate_RETANGULO(A,B);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);



}
