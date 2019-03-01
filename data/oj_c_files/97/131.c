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
	double m;
	int a,b,c,d,e,f;
	cin>>m;
	a=(int)(m/100);
	m=m-100*a;
	b=(int)(m/50);
	m=m-50*b;
	c=(int)(m/20);
	m=m-20*c;
	d=(int)(m/10);
	m=m-10*d;
	e=(int)(m/5);
	m=m-5*e;
	f=m;
	cout<<a<<endl;
	cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
cout<<f<<endl;
return 0;
}