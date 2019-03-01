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

int fenjie(int k, int l);
int main()
{
	int n, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		cout << fenjie(a, 2) << endl;
	}
	return 0;
}

int fenjie(int k, int l)
{
	int num = 1, d, e;
	if(k < l)
	{
		return 0;
	}
	d = (int) (sqrt((double) k));
	for(e = l; e <= d; e++)
	{
		if(k % e == 0)
		{
			num += fenjie(k / e, e);
		}
	}
	return num;
}