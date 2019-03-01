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
	long n,k,i,j,m;
	scanf("%ld %ld",&n,&k);
	i=1;
begin:m=n*i+k;
	  j=1;
judge: if (n*m%(n-1)==0)
	  {
		  j++;
		  m=n*m/(n-1)+k;
		  if (j==n)
		  {
			  printf("%ld\n",m);
			  goto end;
		  }
		  goto judge;
	   }
	   else
	   {
		   i++;
		   goto begin;
	   }
end:;
}
