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
   int a[100000],*p=a,n,k,*q;
   scanf("%d",&n);
   for(p=a;p<a+n;p++)
	   scanf("%d",p);
   scanf("%d",&k);
   for(p=a;p<a+n;p++)
	   if(*p==k)
	   {{for(q=p;q<a+n-1;q++)
	   *q=*(q+1);}
	   n--;
	   p--;}
   printf("%d",*a);
   for(p=a+1;p<a+n;p++)
	   printf(" %d",*p);




}