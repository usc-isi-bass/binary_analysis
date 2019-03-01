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
 int a[100],i,max=0,smax=0,n;
 scanf("%d",&n);
 for (i=0;i<n;i++)
  scanf("%d",&a[i]);
 for (i=0;i<n;i++)
  { 
    if(a[i]>max)
     max=a[i];
  }
 for (i=0;i<n;i++)
  {
    if((a[i]>smax)&&(a[i]!=max))
      smax=a[i];
   }
 printf("%d\n",max);
 printf("%d\n",smax);
}