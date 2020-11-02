
#include<stdio.h>

int main()
{
    int pass;
    scanf("%d",&pass);

    while(pass!=2002)
    {
        printf("Senha Invalida\n");
        scanf("%d",&pass);
    }
    printf("Acesso Permitido\n");

}
