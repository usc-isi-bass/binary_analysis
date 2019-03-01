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
	int g,m,n;
	int method(int m, int n);

	cin >> g ;	// g groups of data,m apples ,n plates
	while (g--)
	{
		cin >> m >> n;
		cout<< method(m,n)<<endl;
	}
	return 0;
}

int method(int m,int n)
{
	if (m==0)
		return 1;
	else if (m==1)
		return 1;
	else if (n==1)
		return 1;
	else
		if ( m>=n )
			return method(m-n,n)+method(m,n-1);
		else 
			return method(m,n-1);
}
