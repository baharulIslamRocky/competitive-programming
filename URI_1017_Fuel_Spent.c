#include<stdio.h>

int main()
{
    int t_hour,a_speed;
    scanf("%d",&t_hour);
    scanf("%d",&a_speed);
    double total_fuel;
    total_fuel=(t_hour*a_speed)/12.0 ;
    printf("%.3lf\n",total_fuel);
}
