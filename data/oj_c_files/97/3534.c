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
	int n,i,a=0,b=0,c=0,d=0,e=0,f=0;
	cin>>n;
	while(n>=100)
	{
		n-=100;
		a++;
	}
	while(n>=50)
	{
		n-=50;
		b++;
	}
	while(n>=20)
	{
		n-=20;
		c++;
	}
	while(n>=10)
	{
		n-=10;
		d++;
	}
	while(n>=5)
	{
		n-=5;
		e++;
	}
	while(n>=1)
	{
		n-=1;
		f++;
	}
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f;
	return 0;
}