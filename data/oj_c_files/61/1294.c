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


int a[10000];

int f(int n)
{
	if(n == 1 || n == 2)
		return 1;
	a[n] = f(n - 1) + f(n - 2);
	return a[n];
}

int main()
{
	a[1] = a[2] = 1;
	int n, i, maxnumber = 0;
	cin >> n;
	int b[20];
	for( i = 0; i < n; i++)
	{
		cin >> b[i];
		if(b[i] > maxnumber)
			maxnumber = b[i];
	}
	int x = f(maxnumber);
	for(i = 0; i < n; i++)
		cout << a[b[i]] << endl;
	return 0;
}