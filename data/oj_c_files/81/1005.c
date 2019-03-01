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
   int m,n,i;
   char a[5][10],(*p)[10];
   p=a;
   for(i=0;i<5;i++)
   {
	   gets(a[i]);
   }
   scanf("%d%d",&n,&m);
   if(m<0||m>4||n<0||n>4)
	   printf("error");
   else
	   for(i=0;i<5;i++)
	   {
	      if(i==m)
			  puts(*(p+n));
		  else if(i==n)
			  puts(*(p+m));
		  else
			  puts(*(p+i));
	   }
}