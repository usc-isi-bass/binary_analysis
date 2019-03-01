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

//********************************
//*???2.???????? **
//*?????? 1300017623 **
//*???2013.10.30  **
//********************************
int main()
{
	int a[100000];
	int n, k, e= 0, d = 0;
	cin >> n;
	for (int i= 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	for (int j = 0; j < n; j++)
		if (a[j] == k)
		{
			for (int p = j; p < (n - 1); p++)
				a[p] = a[p+1];
			n--;
			j--;
		}
		cout << a[0];
	for (int q = 1; q < n; q++)
		cout << " " << a[q];

	return 0;
}