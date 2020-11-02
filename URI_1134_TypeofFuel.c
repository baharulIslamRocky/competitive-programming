#include<stdio.h>

int main()
{
    int type;
    int alc=0,gaso=0,dies=0;
    //scanf("%d",&type);
    do
    {
      scanf("%d",&type);
      if(type==1) alc++;
      else if(type==2) gaso++;
      else if(type==3) dies++;
      //else if(type==4) break;
    }while(type!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gaso);
    printf("Diesel: %d\n",dies);

    return 0;

}
