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

int compare (const void *a,const void *b)
{   return *(int*)b-*(int*)a;;
    }
int main ()
{   int n,k1,k2,m1,m2,win,i,w;
     int c[10000];
    for (;;)
    {   scanf ("%d",&n);
        if (n==0)
        break;
        int *a;
        a=(int *)malloc (sizeof(int*)*n);
        for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
        int *b;
        b=(int *)malloc (sizeof(int*)*n);
        for (i=0;i<n;i++)
        scanf ("%d",&b[i]);
        qsort(a,n,sizeof(int),compare);
        qsort(b,n,sizeof(int),compare);
        win=0;
        k1=0;
        k2=0;
        m1=n-1;
        m2=n-1;
        while (k1<=m1)
        {if (a[m1]>b[m2])
          {win++;
           m1--;
           m2--;}
         else if (a[k1]>b[k2])
         {win++;
          k1++;
          k2++;}
         else if (a[m1]<b[k2])
                {win--;
           m1--;
           k2++;} 
         else
                 break;
                    }     
         printf ("%d\n",200*win);
         }
          

        }
