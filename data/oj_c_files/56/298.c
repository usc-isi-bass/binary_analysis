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
	int n, a, b, c, d, e;
	cin>>n;
    a = n/10000;
	b = (n-10000*a)/1000;
	c = (n-10000*a-1000*b)/100;
	d = (n-10000*a-1000*b-100*c)/10;
	e = (n-10000*a-1000*b-100*c-10*d);
	if(a!=0)
	{
        n = 10000*e+1000*d+100*c+10*b+a;
	}
	if(a==0&&b!=0)
	{
        n = 1000*e+100*d+10*c+1*b;
	}
	if(b==0&&c!=0)
	{
        n = 100*e+10*d+1*c;
	}
	if(c==0&&d!=0)
	{
		n = 10*e+d;
	}
	if(d==0&&e!=0)
	{
		n = e;
	}
	cout<<n<<endl;
	return 0;
}