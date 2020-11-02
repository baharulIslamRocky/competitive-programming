#include<bits/stdc++.h>
using namespace std;
#define size 30
int main()
{
    char call[size][size];
    char zero[]="---";
    char one[]="--*";
    char two[]="-*-";
    char three[]="-**";
    char four[]="*--";
    char five[]="*-*";
    char six[]="**-";
    char seven[]="***";
    char loud[]="caw caw";

    int count=0;
    int blink=0;


        for(int i=0;i<size;i++)
        {
            gets(call[i]);
            if(strcmp(zero,call[i])==0) blink+=0;
            else if(strcmp(one,call[i])==0) blink+=1;
            else if(strcmp(two,call[i])==0) blink+=2;
            else if(strcmp(three,call[i])==0) blink+=3;
            else if(strcmp(four,call[i])==0) blink+=4;
            else if(strcmp(five ,call[i])==0) blink+=5;
            else if(strcmp(six,call[i])==0) blink+=6;
            else if(strcmp(zero,call[i])==0) blink+=7;
            else if(strcmp(loud,call[i])==0)
            {
                count++;
                if(count<3) { cout<<blink<<endl; blink=0;}
                else {cout<<blink<<endl;return 0;
            }





        }
    }


    return 0;
}
