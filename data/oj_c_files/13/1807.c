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
	// ????????
	// ??? ??? ???????
	// ???k??? ???k-1?????? ????? ????????
	// ??????
	int n, i, j, k, p, t;
	int a[20002];
	cin >> n;
	cin >> a[0];
	p = 0;
	for (i = 1; i <= n - 1; i++)
	{
		cin >> k;
		t = 0;
        for (j = 0; j <= p; j++)
		{
			if (a[j] == k)
			{
				t = 1;
				break;
			}
		}
		if (t == 1) continue;
		else
		{
			p = p + 1;
			a[p] = k;
		}
	}
	cout << a[0];
	for (i = 1; i <= p; i++)
	{
		cout << " " << a[i] ; 
	}
	cout << endl;
	return 0;
}