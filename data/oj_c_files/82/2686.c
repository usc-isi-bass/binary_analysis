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
   int n,i,j,a[200],c[200],d,e=0;
   for(i=0;i<=200;i++)
   {
     c[i]=0;
   }
   struct b
   {
       int c,d;
   }b[200];
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d %d",&b[i].c,&b[i].d);
   }
   for(i=0;i<n;i++)
	   if(b[i].c>=90 && b[i].c<=140 && b[i].d>=60 && b[i].d<=90)
	   {
	     a[i]=1;
	   }
	   else
	   {
	     a[i]=0;
	   }
	for(i=0;i<n;i++)
	{
	  if(a[i]==1)
	  {
	    c[e]++;
	  }
	  else
	  {
		  e++;
	  }
	}
	for(i=0;i<=e;i++)
	{
	  for(j=i+1;j<=e;j++)
	  {
	      if(c[i]<c[j])
		  {
		    d=c[j];
			c[j]=c[i];
			c[i]=d;
		  }
	  }
	}
	printf("%d",c[0]);
return 0;
}
