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
   int n,m,i,a[100],*p,*q,*f;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   p=a;q=a+n-1;f=a+n/2;
   for(p=a;p<f;p++,q--)
   {m=*p;*p=*q;*q=m;}
   for(i=0;i<n-1;i++)
   printf("%d ",a[i]);
   printf("%d",a[n-1]);
}