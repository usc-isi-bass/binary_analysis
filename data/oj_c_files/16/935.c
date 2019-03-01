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
	int a,b,c,d;
	float n;
	cin>>n;
	a=floor(n/1000);
	b=floor((n-a*1000)/100);
	c=floor((n-a*1000-b*100)/10);
	d=n-a*1000-b*100-c*10;
	if(n/1000>=1)
	{
	cout<<d<<c<<b<<a<<endl;}
	if(n/1000<1 && n/100>=1)
	{	cout<<d<<c<<b<<endl;
	}
	if(n/100<1 && n/10>=1)
	{cout<<d<<c<<endl;
	}
	if(n/10<1)
	{cout<<d<<endl;}
	return 0;
}
