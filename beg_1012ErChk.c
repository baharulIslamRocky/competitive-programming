#include<stdio.h>

double calculate_TRIANGULO(double A,double C);
double calculate_CIRCULO(double C);
double calculate_TRAPEZIO(double A,double B,double C);
double calculate_QUADRADO(double B);
double calculate_RECTANGULO(double A,double B);
int main()
{
    double A,B,C;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RECTANGULO;
    scanf("%lf %lf %lf",&A,&B,&C);
    TRIANGULO=  calculate_TRIANGULO(A,C);
    CIRCULO= calculate_CIRCULO(C);
    TRAPEZIO=calculate_TRAPEZIO(A,B,C);
    QUADRADO=calculate_QUADRADO(B);
    RECTANGULO=calculate_RECTANGULO(A,B);
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RECTANGULO: %.3lf\n",RECTANGULO);


}
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
double calculate_RECTANGULO(double A,double B)
{
    return A*B;
}
