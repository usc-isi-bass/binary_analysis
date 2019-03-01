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
   int a,b,c,d,e,j=0;
   c=1;
   if(c==1)
   {
	   a=5;
	   e=4;
	   d=3;
	   b=2;
	   if(e==1) j++;
	   if(b==2) j++;
	   if(a==5) j++;
	   if(c!=1) j++;
	   if(d==1) j++;
	   if(j==2&&a==5&&b==2) printf("%d %d %d %d %d\n",a,b,c,d,e);
   }
}

	 