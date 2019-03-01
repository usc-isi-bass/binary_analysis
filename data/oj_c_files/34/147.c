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

main()
{
  int a,b,c,d,e,i,j,n;
  scanf("%d",&n);
  do
  {
	if(n==1)
		printf("End");
	else
	{
	  if(n%2==1)
	  {  printf("%d",n);
	     n=n*3+1;
	     printf("*3+1=%d\n",n);
		 if(n==1)
			 printf("End");
	  }
	  if(n%2==0)
	  {
	     printf("%d",n);
		 n=n/2;
		 printf("/2=%d\n",n);
if(n==1)
			 printf("End");
	  }
	}
  }while(n!=1);
}