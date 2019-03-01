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

int reverse(int n)
{
	int c,a,b=0;
	c=n;
	if(n>=0)
	{
		while(c>0)
		{
			a=c%10;
			c=c/10;
            b=10*b+a;
		}
	}
	if(n==0)
		b=0;
	if(n<0)
	{
		b=-reverse(-n);
	}
	return(b);
}
  int main()
  {
	  int i,c;
	  for(i=1;i<=6;i++)
	  {
		  scanf("%d",&c);
	      printf("%d\n",reverse(c));
	  }
  return 0;
  }