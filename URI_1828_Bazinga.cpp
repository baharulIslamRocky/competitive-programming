#include<bits/stdc++.h>
int gamereturn(void)
{
    char sheldon[20], raj[23];
    scanf("%s %s",sheldon,raj);
    if(strcmp(sheldon,raj)==0) return 3;
    else if(strcmp(sheldon,"tesoura")==0 && strcmp(raj,"papel")==0) return 1;
    else if(strcmp(sheldon,"papel")==0 && strcmp(raj,"pedra")==0) return 1;
    else if(strcmp(sheldon,"pedra")==0 && strcmp(raj,"lagarto")==0) return 1;
    else if(strcmp(sheldon,"lagarto")==0 && strcmp(raj,"Spock")==0) return 1;
    else if(strcmp(sheldon,"Spock")==0 && strcmp(raj,"tesoura")==0) return 1;
    else if(strcmp(sheldon,"tesoura")==0 && strcmp(raj,"lagarto")==0) return 1;
    else if(strcmp(sheldon,"lagarto")==0 && strcmp(raj,"papel")==0) return 1;
    else if(strcmp(sheldon,"papel")==0 && strcmp(raj,"Spock")==0) return 1;
    else if(strcmp(sheldon,"Spock")==0 && strcmp(raj,"pedra")==0) return 1;
    else if(strcmp(sheldon,"pedra")==0 && strcmp(raj,"tesoura")==0) return 1;
    else return 2;

}
int main(void)
{
    int T,i=0;
    scanf("%d",&T);
    while(T--)
    {
        int val = gamereturn();
        if(val==1) printf("Caso #%d: Bazinga!\n",++i);
        else if(val==2) printf("Caso #%d: Raj trapaceou!\n",++i);
        else if(val==3) printf("Caso #%d: De novo!\n",++i);



    }



    return 0;
}
