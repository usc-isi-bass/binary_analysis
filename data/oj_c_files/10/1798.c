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

main()
{
   int i,j;
   int k;
   scanf("%d",&k);
   int a[k],b[k];
   for(i=0;i<k;i++)
   {
     scanf("%d",&a[i]);
   }
   b[k-1]=1;
   int d;
   for(i=k-2;i>=0;i--)
   { d=0;
     b[i]=1;
     for(j=i+1;j<k;j++)
      {if(a[i]>=a[j])
        if(d<b[j])
         d=b[j];
      }
      b[i]=1+d;
   }
   for(i=0;i<k;i++)
   if(d<b[i])
   d=b[i];
   printf("%d",d);}