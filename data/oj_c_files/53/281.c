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
   int a[300];
   int i,n,j,s=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("%d,",a[0]);
   for(j=1;j<n;j++)
	   for(i=0;i<j;i++)
	   {
		   if(a[j]!=a[i])
		   {
			   if(i==j-1)
				   if(j>s) s=j;
		   }
		   else break;
	   }
   for(j=1;j<=s;j++)
   for(i=0;i<j;i++)
   {
		   if(a[j]!=a[i]) 
		   {
		     if(i==j-1&&j<s) printf("%d,",a[j]);
             else if(i==j-1&&j==s) printf("%d",a[j]);
		   }
	   else
		   break;
	}
}