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
    int n,a,b,c,d,e;
    cin>>n;
    a=n%10;
	n=(n-a)/10;
	b=n%10;
	n=(n-b)/10;
    c=n%10;
	n=(n-c)/10;
    d=n%10;
	n=(n-d)/10;
    e=n%10;
	n=(n-e)/10;
	if(e!=0)
		cout<<a<<b<<c<<d<<e<<endl;
	else
		if(d!=0)
			cout<<a<<b<<c<<d<<endl;
		else
			if(c!=0)
				cout<<a<<b<<c<<endl;
			else
				if(b!=0)
					cout<<a<<b<<endl;
				else
					cout<<a<<endl;
    return (0);
}