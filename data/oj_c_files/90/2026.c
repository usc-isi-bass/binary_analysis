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

//*************************************************
//***????????***
//***??????***
//***???2012.1.11***
//*************************************************

int f(int a,int b)
{
	if (b == 1 || a == 0 || a == 1)
	{
		return 1;
	}
	else if (a >= b && b > 1)
	{	
		return f(a - b,b) + f(a,b - 1);
	}
	else if (b > 1 && a < b)
	{
		return f(a,a);
	}
}

int main ()
{
	int t,i,M,N;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> M >> N;
		cout << f(M,N) << endl;
	}
	return 0;
}