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
    int n;
    scanf("%d",&n);
    int a[N][2];
    int i,j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<2;j++)
       {
            scanf("%d",&a[i][j]);
       }
    }
    double jwj;
    jwj=(double)a[0][1]/a[0][0];
    double b[N]; 
    int k=0;
    for(i=1;i<n;i++)
    {
            b[k]=(double)a[i][1]/a[i][0];
          if(b[k]>0.05+jwj)
          {
              printf("better\n"); 
          }

         else if(b[k]+0.05<jwj)
          {
          printf("worse\n");
          }
                   else{
               printf("same\n");
               }
            k++;

    }
      return 0;
}
