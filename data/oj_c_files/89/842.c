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
int main()
{
	int tell, n, i, j, k, *p;
	p = a;
    cin >> n;
	for(i = 0; i < n; i++)
		a[i] = 1;
	while(cin >> i >> j)
		if(i != j)
			*(p + i) = 0;
	for(i = 0; i < n; i++)
		if(a[i])
		{
			cout << i << endl;
			break;
		}
	if(i == n)
		cout << "NOT FOUND" << endl;
	return 0;
}