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

int last(int k)
{
	if (k%2==0)
	{
		return (k/2);
	}
	else
	{
		return ((k-1)/2);
	}
}

int main()
{
	int x,y;
	cin>>x>>y;
	while (x!=y)
	{
		if (x>y)
		{
			x = last(x);
		}
		else
		{
			y = last(y);

		}
	}
	cout<<x;
}