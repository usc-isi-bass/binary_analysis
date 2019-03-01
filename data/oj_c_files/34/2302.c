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
{int  n,k;
  scanf("%d",&n);
  k=n;
  while(k!=1)
  {     if(n%2==0) 
  {     k=n/2;
	  printf("%d/%d=%d\n",n,2,k);
	  n=k;
  }
   else  
   {     k=n*3+1;
	   printf("%d*%d+%d=%d\n",n,3,1,k);
	   n=k;
   }
  }
  printf("End");
  return 0;
}