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
     int a[17],i,n,j;
     scanf("%d",&a[1]);
     while(a[1]>0)
     {
         
         n=0;
         i=1;
        do
          { i++;
            scanf("%d",&a[i]);
            for(j=1;j<=i;j++)
            if(a[i]==a[j]*2||a[j]==a[i]*2) 
             n++;
             
            }
        while(a[i]!=0);
     printf("%d\n",n-1);
     scanf("%d",&a[1]);
     }
}
