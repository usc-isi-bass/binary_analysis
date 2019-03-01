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

//***************************
//*????????        **
//*?????? 1300012965 **
//*???20131204          **
//***************************
int c, s, m, n, k;
int f(int n, int m)
{
	if(n == 0)
		return 1;
	else
	{
		if(m > n && m % c == k) 
		{
			return f(n-1,(c-1)*(m-k)/c);
		}
		else
			return 0;
	}
}

int main()
{
	int t;
	cin >> n >> k;
	c = n;
	for(m=k+n;;m+=n)
	{
		t = f(n, m);
		if(t == 1)
			break;
	}
	cout << m << endl;
	return 0;
}