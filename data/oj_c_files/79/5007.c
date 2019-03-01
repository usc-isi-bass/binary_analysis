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
   int i, j;
   int a[1000],b[1000],c[1000]={0};
   for(i=0;;i++)
   {
       scanf("%d%d",&a[i],&b[i]);
	   if(b[i]==0&&a[i]==0)
	   {
		   break;
	   }
	   else
	   {
	   for(j=2;j<=a[i];j++)
	   {
		   c[i]=(c[i]+b[i])%j;
	   }
	   }
   }
   for(i=0;;i++)
   {
	   if(a[i]==0&&b[i]==0)
	   {
		   break;
	   }
	   else 
	   {
		   printf ("%d\n", c[i]+1);
	   }
   }
   return 0;
}