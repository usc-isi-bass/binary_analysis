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
	int x,y,t,a,b,i=0,j=0,m;
	scanf("%d%d", &x, &y);
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	a=x;
	b=y;
	while(a!=1)
	{
		a=a/2;
		i=i+1;
	}
	while(b!=1)
	{
		b=b/2;
		j=j+1;
	}
	m=i-j;
	while(m!=0)
	{
		x=x/2;
		m=m-1;
	}
	while(x!=y)
	{
		x=x/2;
		y=y/2;
	}
	printf("%d\n", x);
	return 0;
}
