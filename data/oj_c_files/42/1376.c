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
//*???2.cpp   **
//*?????? 1200012768 **
//*???2012.10.30 **
//*???????????  **
//********************************
int main()               
{
	int n, m, p, count = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> p;
	for (int j = 0; j < n; )
	{
		if (a[j] == p)
		{
			for (int k = j; k < n - 1; k++)
				a[k] = a[k + 1];
			count++;
			n--;
		}
		else
			j++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i < n - 1)
			cout << " ";
		else
			cout << endl;
	}
	return 0;
}