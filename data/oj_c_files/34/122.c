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

int jiaogu(int n)
{
	if(n==1)
	{
	  printf("End\n");
	  return 0;
	}
	else if(n%2)
	{
	  printf("%d%c%d%c%d%c%d\n",n,42,3,43,1,61,n*3+1);
	  n=n*3+1;
	  jiaogu(n);
	  return 0;
	}
	else
	{
	  printf("%d%c%d%c%d\n",n,47,2,61,n/2);
	  n=n/2;
	  jiaogu(n);
	  return 0;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	jiaogu(n);
	return 0;
}