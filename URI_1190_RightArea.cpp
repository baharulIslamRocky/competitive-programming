

#include<bits/stdc++.h>
#define row 12
#define column 12

using namespace std;

int main(void)
 {
     double M[row][column];
     char O;
     double sum;
     int i,j, count1;

     cin>>O;

     for(i=0;i<row;i++)
     {
         for(j=0;j<column;j++)
         {
             cin>>M[i][j];
         }
     }

     if(O=='S')
     {
         sum=0.0;
         for(i=0;i<row;i++)
         {
             for(j=0;j<column;j++)
             {
                 if((j>i )&& i+j>row-1)
                 {
                     sum+= M[i][j];
                 }
             }
         }
         printf("%.1lf\n",sum);
     }
     else if(O=='M')
     {
         sum=0.0;
         count1=0;
         for(i=0;i<row;i++)
         {
             for(j=0;j<column;j++)
             {
                 if(j>i && i+j>row-1)
                 {
                     sum+= M[i][j];
                     //printf("M[%d][%d] = %.1lf\t",i,j,M[i][j]);
                     count1++;
                 }
             }

         }
         printf("%.1lf\n",sum/count1);
         //cout<<"count"<<count1<<endl;
     }
     return 0;
 }



