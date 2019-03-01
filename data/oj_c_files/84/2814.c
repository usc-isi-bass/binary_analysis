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
  int x,max,secondmax,n,t,i;
  scanf("%d %d",&n,&x);
  secondmax=max=x;
	  for(i=1;i<n;i++)
	  {
		  scanf("%d",&t);
		  if(t>max)
		  {
			  secondmax=max;
			  max=t;
		  }
		  else if(t>secondmax)
		  {
			  secondmax=t;
		  }
		  else if((max==secondmax)&&(i==1))
		  {
			  t=secondmax;
		  }
	  }
   printf("%d\n%d\n",max,secondmax);
   return 0;
}