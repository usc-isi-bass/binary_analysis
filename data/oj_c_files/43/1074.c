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
   int m,i,k,t,s=0,p=0;
   scanf("%d",&m);
   i=3;
   k=1;
   t=1;
   while(i<=m/2)
   {
	   while(k<=i)
	   {if(i%k==0)
			s=s+1;
		   else;
		   k=k+1;}
	   if(s==2)
	   {
		   while(t<=m-i)
		   {if((m-i)%t==0)
		      p=p+1;
		      else;
			  t=t+1;}
		   if(p==2)
			   printf("%d %d\n",i,m-i);
		   else;
	   }
	   else;
	   s=0;
	   p=0;
	   t=1;
	   k=1;
	   i=i+1;
   }
return 0;
}