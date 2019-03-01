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

// ??-??.cpp : ??????????????
//2012.10.29




int main()
{
	int m,n,a[15],x=0,i,y=0;
	while(y!=1)
	{
	for (m=0;;m++)
	{
		cin >> n;
		if (n!=0 && n!=-1)
		{
			a[m]=n;
			continue;
		}
		if (n==0)
		{
			break;
		}
		if (n==-1)
		{
			y=1;
			break;
		}
	}
	if (y==1)
	{
		break;
	}
	for (m=0;m<=15;m++)
	{
		for (i=0;i<=15;i++)
		{
			if (a[m]*2==a[i] && a[m]!=0)
			{
				x=x+1;
			}
		}
	}
	for (m=0;m<=15;m++)
	{
		a[m]=0;
	}
	cout << x << endl;
	x=0;
	}
	return 0;
}
