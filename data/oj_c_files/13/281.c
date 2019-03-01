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
   int j[101]={0},a[20000],b[20000]={0},i,n,x=0,m=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   { if(j[a[i]]==0)
     {j[a[i]]=1;
      b[x]=a[i];x++;
     }
   }
   for(i=0;i<x-1;i++)
   printf("%d ",b[i]);
   printf("%d",b[i]);
}