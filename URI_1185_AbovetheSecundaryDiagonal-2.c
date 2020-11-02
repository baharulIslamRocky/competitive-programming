 #include<stdio.h>
 #define row 12
 #define column 12

 int main(void)
 {
     float M[row][column];
     char O;
     float sum=0.0,avr=0.0;
     int i,j, count=0;

     scanf("%c",&O);
     for(i=0;i<row;i++)
     {
         for(j=0;j<column;j++)
         {
             scanf("%f",&M[i][j]);
         }
     }

     if(O=='S')
     {
         sum=0.0;
         for(i=0;i<row;i++)
         {
             for(j=0;j<column;j++)
             {
                 if(i+j<row-1)
                 {
                     sum+= M[i][j];
                 }
             }
         }
         printf("%.1f\n",sum);
     }
     else if(O=='M')
     {
         sum=0.0;
         count=0.0;
         for(i=0;i<row;i++)
         {
             for(j=0;j<column;j++)
             {
                 if(i+j<row-1)
                 {
                     sum+= M[i][j];
                     count++;
                 }
             }
         }
         printf("%.1f\n",(float)sum/count);
     }
     return 0;
 }
