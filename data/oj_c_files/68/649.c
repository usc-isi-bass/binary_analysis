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
  int n,i,j,k,pan,x1,x2;
  scanf("%d",&n);
  for(i=6;i<=n;i+=2)
  {
	  for(j=3;j<=i;j+=2)
	  {
		  pan=sqrt(j);
		  for(k=3;k<=pan;k+=2)
			  if(j%k==0)break;
		  if(k>=pan+1)
		  {
              x2=i-j;
	          pan=sqrt(x2);
	          for(k=3;k<=pan;k+=2)
		         if(x2%k==0)break;
	          if(k>=pan+1)break;
		  }
	  }
    printf("%d=%d+%d\n",i,j,x2);
  }
}