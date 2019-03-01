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

void main()
{
     int a[300];
     int n,i,j,k;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
           for(;a[j]==a[i];)
           {
             for(k=j;k<n;k++)
             {
              a[k]=a[k+1];
              a[n]=0;
             }
             n=n-1;
           }
         }
     }
     printf("%d",a[0]);
     for(i=1;i<n;i++)
     printf(",%d",a[i]);


}
