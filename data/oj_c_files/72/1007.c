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
   int n,m,j,i,jz[20][20];
   scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&jz[i][j]);
      }
   }
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         if(i==0&&j==0)
         {
             if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i+1][j])
             {
                 printf("%d %d\n",i,j);
             }
         }
         if(i==0&&j!=0&&j!=n-1)
         {
             if(jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i][j+1])
                {
                  printf("%d %d\n",i,j);
                }
         }
         if(i==0&&j==n-1)
         {
             if(jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i+1][j])
             {
                  printf("%d %d\n",i,j) ;
             }
         }
         if(i!=0&&i!=m-1&&j==0)
         {
             if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i-1][j])
             {
                   printf("%d %d\n",i,j);
             }
         }
         if(i!=0&&i!=m-1&&j!=0&&j!=n-1)
         {
              if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i-1][j])
              {
                   printf("%d %d\n",i,j);
              }
         }
         if(i!=0&&i!=m-1&&j==n-1)
         {
              if(jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i-1][j])
              {
                   printf("%d %d\n",i,j);
              }
         }
         if(i==m-1&&j==0)
         {
              if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i-1][j])
              {
               printf("%d %d\n",i,j);
              }
         }
         if(i==m-1&&j!=0&&j!=n-1)
         {
              if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i-1][j])
              {
                   printf("%d %d\n",i,j);
              }
         }
         if(i==m-1&&j==n-1)
         {
              if(jz[i][j]>=jz[i-1][j]&&jz[i][j]>=jz[i][j-1])
              {
                   printf("%d %d\n",i,j);
              }
         }
      }
   }	
  return 0;
}