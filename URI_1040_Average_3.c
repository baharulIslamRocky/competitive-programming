#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N5;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    float avr = (N1*2+N2*3+N3*4+ N4*1)/10;
    //printf("%.1f",avr);
    printf("Media: %.1f\n",avr);
    if(avr >=7.0) printf("Aluno aprovado.\n");
    if(avr<5.0) printf("Aluno reprovado.\n");
    if(avr>=5.0 && avr <=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        avr = (avr + N5)/2;
        if(avr>=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",avr);
    }
}
