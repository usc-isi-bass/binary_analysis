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


int f(int m,int n)
{
	int k;
	if (m==1)
		return 1;
	if (n==1)
		return 1;
	else 
	{
		if (m>n) 
			k=f(m,n-1)+f(m-n,n);
		if (m==n)
			k=f(m,n-1)+1;
		if (m<n)
			k=f(m,m);
	    return k;
	}
}

int main ()
{
	int t,m,n,l;
	cin >> t;
	for (int i=0;i<t;i++)
	{
		cin >>m >>n;
		l=f(m,n);
		cout << l<< endl;
	}
	return 0;
}