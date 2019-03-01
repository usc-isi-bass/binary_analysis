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
	int a,b,n,k,s;
	a=1;
	scanf("%d %d",&n,&k);
  for(b=1;;b++)
  {s=b*(n-1);
    while(a<=n)
	{if(s%(n-1)==0)
	{s=n*s/(n-1)+k;
	a++;}
	else 
	{a=1;
	break;}
	}
	if(a-1==n)
	{printf("%d",s);
	break;}
	else continue;
  }
	return 0;
}