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
  int n,k,m,i,t;
  scanf("%d%d",&n,&k);
  for(m=1;;m++)
  {     
	  t=m;
	       for(i=1;i<=n;i++)
		   {   
		  	  if(m-k<=0||m%n!=k)
			  {
				  i=0;
	          break;
			  }
		      else
			  {
				  m=(m-k)/n*(n-1);
				  continue;
			  } 
		   }
	  if(i==(n+1))
	  {
		  printf("%d\n",t);
		  break;
      }
	  else
	  {
		  m=t;
		  continue;
	  }
  }
  return 0;
}
