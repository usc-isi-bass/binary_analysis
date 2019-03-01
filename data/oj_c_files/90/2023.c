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


int dispose(int m, int n)
{
	if(n == 1 || m <=1 )
		return 1;
	if(m < n)
		return dispose(m, m);
	return dispose(m, n-1) + dispose(m-n, n);
}

int main()
{
	int t, m, n;
	cin >> t;
	while(t)
	{
		cin >> m >> n;
		cout << dispose(m, n) << endl;
		t--;
	}
}