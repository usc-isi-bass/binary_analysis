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
     int n,i,e,j;
     int sz[100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        scanf("%d ",&sz[i]);
     }
     if(n%2==0)
     {
         for(i=0;i<n/2;i++)
         {
            for(j=0;j<n;j++)
            if(i+j==n-1)
            {
             e=sz[i];
             sz[i]=sz[j];
             sz[j]=e;
             }
         }
      }
      else
      {
           for(i=0;i<(n+1)/2;i++)
           {
            for(j=0;j<n;j++)
            if(i+j== n-1)
            {
             e=sz[i];
             sz[i]=sz[j];
             sz[j]=e;
             }
         }
      }
      for(i=0;i<n-1;i++)
      {
         printf("%d ",sz[i]);
      }
      printf("%d",sz[n-1]);
          return 0;
}