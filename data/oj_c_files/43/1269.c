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
	int m,a[2500],b=0,c=0,x,d,i,j;
	cin >> m;
	for(i=3;i<m;i++)
	{
		c=0;
		for(j=2;j*j<=i;j++)
		{
			d = i % j;
			if(d==0)
			{
				c = 1;
				break;
			}
		}
		if(c==0)
		{
			a[b] = i;
			b++;
		}
	}
	x = b;
	for(i=0;i<x;i++)
	{
		for(j=x-1;j>i-1;j--)
		{
			if(m==a[i]+a[j])
			{
				x = j;
				cout << a[i] << " " << a[j] <<endl;
				break;
			}
		}
	}
	return 0;
}