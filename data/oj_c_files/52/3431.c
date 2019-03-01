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

int main ()
{
	int m, n, i,j = 0, k = 0;
	int *p = NULL;
	int a[200];
	cin >> n >> m;
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = n; i < 2 * n - m; i++)
		a[i] = a[j ++];
	
	p  = a + n - m;
	for(i = 0; i < n - 1; i++)
	cout << *p++<< " ";
	cout << *p << endl;
	return 0;
}



