#include<stdio.h>
#include<string.h>

int main()
{
    char var1[30],var2[30],var3[30];
    gets(var1);
    if(0==strcmp("vertebrado",var1))
    {
        gets(var2);
        if(0==strcmp("ave",var2))
           {
               gets(var3);
               if(0==strcmp("carnivoro",var3)) printf("aguia\n");
               else if(0==strcmp("onivoro",var3)) printf("pomba\n");
           }
        else if(0==strcmp("mamifero",var2))
            {
                gets(var3);
                if(0==strcmp("onivoro",var3)) printf("homem\n");
                else if(0==strcmp("herbivoro",var3)) printf("vaca\n");

            }
    }
    else if(0 == strcmp("invertebrado",var1))
            {
                gets(var2);
                if(0==strcmp("inseto",var2))
                   {
                       gets(var3);
                       if(0==strcmp("hematofago",var3)) printf("pulga\n");
                       else if(0==strcmp("herbivoro",var3)) printf("lagarta\n");
                   }
                else if(0==strcmp("anelideo",var2))
                        {
                            gets(var3);
                            if(0==strcmp("hematofago",var3)) printf("sanguessuga\n");
                            else if(0==strcmp("onivoro",var3)) printf("minhoca\n");
                        }

            }


}
