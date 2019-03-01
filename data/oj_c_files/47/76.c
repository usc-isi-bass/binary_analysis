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
 int n,i,m,t;
 int a[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    scanf("%d",&m);
    a[i]=m;
   }
for(i=0;i<=(int)(n-1)/2;i++)
  {
  t=a[i];
  a[i]=a[n-i-1];
  a[n-i-1]=t;
  }
  for(i=0;i<n;i++)
  { 
 printf("%d",a[i]);
   if(i<n-1)
 printf(" ");
   }
}