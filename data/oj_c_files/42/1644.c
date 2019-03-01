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
 int d=0,n,a[100000],i,b;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&b);
 for (i=0;i<n;i++)
 {
  
  if ( a[i]!=b&&d==0 )
  {
  printf("%d",a[i]);
  a[i]=b;
  d=1;
  }
  if ( a[i]!=b )
  printf(" %d",a[i]);
 }
 
} 
