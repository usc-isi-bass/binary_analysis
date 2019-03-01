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
	int n, a, b, c, d;
	cin>>n;
	a=n/1000;
	b=(n-1000*a)/100;
	c=(n-1000*a-b*100)/10;
	d=n-1000*a-b*100-c*10;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				cout<<d<<endl;
			}
			else
			{
				cout<<d<<c<<endl;
			}
		}
		else
		{
			cout<<d<<c<<b<<endl;
		}
	}
	else
	{
		cout<<d<<c<<b<<a<<endl;
	}
	return 0; 
}