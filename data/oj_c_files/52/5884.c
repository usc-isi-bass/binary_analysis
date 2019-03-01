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
//*???1.???? **
//*?????? 1300017623 **
//*???2013.12.11  **
//********************************
int main()
{
	int a[100] = {0};
	int *p = a;
	int n, m, t;
	cin >> n >> m;
	for (p = a; p <= &a[n-1]; p++)
		cin >> *p;
	for (; m > 0; m--)
	{
		t = a[n-1];
		for (p = &a[n-2]; p >= a; p--)
			*(p + 1) = *p;
		a[0] = t;
	}
	cout << a[0];
	for (p = &a[1]; p <= &a[n-1]; p++)
		cout << " " << *p;

	return 0;
}