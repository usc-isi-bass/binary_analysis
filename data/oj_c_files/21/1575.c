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
  int n, a[310],i,s=0,temp,j;
  float ave,c,d;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
    s+=a[i];
  }
  ave=(float)s/n;
  for(i=0;i<n;i++)
   for(j=i;j<n;j++)
    {if(a[j]<a[i]){temp=a[i];
     a[i]=a[j];
     a[j]=temp;}
    }
   c=a[n-1]-ave;
   d=ave-a[0];
   if(c==d)printf("%d,%d",a[0],a[n-1]);
   if(c>d)printf("%d", a[n-1]);
   if(c<d)printf("%d", a[0]);
   else;
 
  return 0;
}