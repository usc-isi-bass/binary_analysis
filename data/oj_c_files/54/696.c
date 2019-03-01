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
   int m,n,k,x,flag;
   cin>>n>>k;
   for(m=1;;m++)
   {
       x=m;
	   flag=1;
	   for(int i=0;i<n;i++)
	   {
		   if((x-k)%n!=0||x<n+k)
		   {
			   flag=0;
			   break;
		   }
		   else
			   x=(x-k)*(n-1)/n;
	   }
	   if(flag)
	   {
		   cout<<m<<endl;
		   break;
	   }
   }
   return 0;
}