#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main()
{
   int num[9][9];
   int next[9][9];
   int m,n,i,j,t;
   int k,h;
   cin>>m>>n;
   
   for(i=0;i<9;i++)
      for(j=0;j<9;j++)
         {num[i][j]=0;
          next[i][j]=0;}
   num[4][4]=m;

   for(t=n;t>=1;t--)
     {for(i=0;i<9;i++)
        for(j=0;j<9;j++)
           if(num[i][j]!=0)
             {next[i][j]+=2*num[i][j];
              next[i-1][j]+=num[i][j];   
              next[i+1][j]+=num[i][j];
              next[i][j-1]+=num[i][j];
              next[i][j+1]+=num[i][j];
              next[i-1][j-1]+=num[i][j];
              next[i-1][j+1]+=num[i][j];
              next[i+1][j-1]+=num[i][j];
              next[i+1][j+1]+=num[i][j];
             }
      for(i=0;i<9;i++)
         for(j=0;j<9;j++)
              {num[i][j]=next[i][j];
               next[i][j]=0;}
     }
   for(i=0;i<9;i++)
       {for(j=0;j<8;j++)
           cout<<num[i][j]<<" ";
        cout<<num[i][j]<<endl;}

   return 0;
}