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
	int n,a=0,m;
	scanf ("%d",&n);
	while (n>0)
	{
		if (n%7==0)
		{n--;continue;}
		if (n%10==7)
		{n--;continue;}
		else
		{m=n/10;}
		if (m%10==7)
		{n--;continue;}
		else 
		{a=n*n+a;n--;}
	}
	printf("%d\n",a);
	return 0;
}
