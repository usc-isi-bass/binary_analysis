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
   int a[20000];
   int n,i,j,t;
   scanf("%d",&n);
   for(j=0;j<n;j++)
	   scanf("%d",&a[j]);
   printf("%d",a[0]);
   for(j=1;j<n;j++)

   {   t=0;
       for(i=0;i<j;i++)
	   {
		   if(a[i]==a[j])
			   t=t+1;
		   else;
	   }
	   if(t==0)   printf(" %d",a[j]);
		  else;
   }

}
