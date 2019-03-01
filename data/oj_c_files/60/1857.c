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

int main ()
{
    int n;
    scanf("%d",&n);
    if (n<5)
     printf ("empty");
    else 
     {
        int i,j,k;
        for (i=3;i<=n-2;i++)
         {
             for(j=2;j<=sqrt(i);j++)
              {
                 if (i%j==0) 
                 break;
              }
             if (j>sqrt(i))
              {
                 for (k=2;k<=sqrt(i+2);k++)
                 {
                    if ((i+2)%k==0)
                    break;
                 }
                 if (k>sqrt(i+2))
                   printf ("%d %d\n",i,i+2);            
              }          
         }
     } 
} 