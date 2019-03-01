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
   int x,u,i,result;
   long t;
   scanf("%d",&x);
   u=floor(log10(x));
   result=0;
   for (i=1;i<=u+1;i++)
   {
	   t=pow(10,i);
	  result=result+floor(((x%t)/pow(10,i-1)))*pow(10,u-i+1);
   }
   printf("%ld",result);
}
