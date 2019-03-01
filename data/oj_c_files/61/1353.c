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

/*
* ??????????.cpp
* ??????
* ?????2012.10.23
* ?????????
*/
int main()
{
	int n,a,b,i,s,p;
	cin>>s;
	for (p=1;p<=s;p++)
	{
	cin>>n;
	a=b=1;
	i=2;
	if (n<=2)
		cout<<a<<endl;
	else
	{
		while (i<=n)
		{
			a=a+b;
			i++;
			if (i==n)
				{cout<<a<<endl;break;}
			else
			{
				b=a+b;
				i++;
				if (i==n)
					{cout<<b<<endl;break;}
			}
		}
	}
	}
	return 0;
}
