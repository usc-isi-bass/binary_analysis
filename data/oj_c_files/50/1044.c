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
   int w,x,i,a[13];
   scanf("%d",&w);
   a[1]=13;
   a[2]=44;
   a[3]=72;
   a[4]=103;
   a[5]=133;
   a[6]=164;
   a[7]=194;
   a[8]=225;
   a[9]=256;
   a[10]=286;
   a[11]=317;
   a[12]=347;
   for(i=1;i<=12;i++)
   {
	   x=a[i]%7;
	   if(x+w-1==5)
	   {
		   printf("%d\n",i);
	   }
           else if(x+w-8==5)
           {
                   printf("%d\n",i);
           }
   }
   return 0;
}
