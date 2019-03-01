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

int  main( )
{
   int a[1000];
   int n,i;
   scanf ("%d",&n);
   for(i=0;i<n;i=i+1)
   {
	   scanf ("%d",&a[i]);
   }
   for(i=0;i<n;i=i+1)
   {
	   if (i==0)
	   printf("%d",a[n-1]);
	   else
		   printf(" %d",a[n-1-i]);
   }
return 0;
}

