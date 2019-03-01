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
   int i,t,j,s;
   char a[210],b[210];
   gets(a);
   t=strlen(a);
   j=0;
   s=0;
   for(i=0;i<t;i++)
   {
       if(a[i]==' ')
	   {
	       if(j==0)
		   {
			   b[s]=a[i];
			   s++;
		       j++;
		   }		   
	   }
	   else
	   {
	       b[s]=a[i];
		   s++;
           j=0;
	   }
   }
   b[s]='\0';
   puts(b);
   return 0;
}