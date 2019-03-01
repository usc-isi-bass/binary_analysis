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

 int main ( )
{
  int n,*p,i=0,x;
  scanf("%d",&n);
  int a[n];
  p=a;
  for (i=0;i<n;i++)
  scanf("%d",p++);
  scanf("%d",&x);
   p=a;
   for (p;p<a+n;p++)
   { if (*p!=x) 
   {printf("%d",*p);    break;}}
    p=p+1;
   for (p;p<a+n;p++)  
  { if (*p!=x) 
   printf(" %d",*p);}
   }