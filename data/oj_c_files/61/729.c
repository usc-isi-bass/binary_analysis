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
   int n,s[20],i,j,a,b,c;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&(s[i]));
   }
   for(i=0;i<n;i++)
   {
	   if(s[i]<=2)
	       printf("1\n");
	   if(s[i]>2)
	   {
		       a=1;
			   b=1;
		       for(j=3;j<=s[i];j++)
			   {
		           c=a+b;
		           a=b;
		           b=c;
			   }
	          printf("%d\n",c);
	   }
   }
	return 0;

}
