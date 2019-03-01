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
	int n,a,b,c,d,e,f;
	int A,B,C,D,E;
	cin>>n;
	a=n/100;
	A=n%100;
	b=A/50;
	B=A%50;
	c=B/20;
	C=B%20;
	d=C/10;
	D=C%10;
	e=D/5;
	E=D%5;
	f=E;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
}