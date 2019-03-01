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
   int a[300],b[300]={0};
   int i, j, n;

   scanf ("%d",&n);

   for (i=0;i<n;i++)
   scanf ("%d",&a[i]);

   for (i=0;i<n;i++)
   {
    for (j=0;j<i;j++)
     if (a[i]==a[j])
      {
       b[i]=1;
       continue;
       }
       }


     {
      int flag=0;
      for (i=0;i<n;i++)
      {
      if(b[i]==0&&flag==0)
      {
       flag=1;
       printf ("%d",a[i]);
       continue;
       }

       if(b[i]==0&&flag==1)
       printf (",%d",a[i]);
      }
      }

      }

