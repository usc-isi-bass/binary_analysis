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

int num = 0, t = 2;
void detach(int n)
{
	int i;
	int q = t; // ?q???t??????
	if (n == 1) // n?1?????1
	{
		num++;
	}
	else
	{
		for (i = t; i <= n / 2; i++) // ?t?n/2?????n??
		{
			if (n % i == 0)
			{
				n = n / i;
				t = i; // ?????n??n/i?????i?n/2
				detach(n); // ????
				n = n * i; // ??n?t
				t = q;
			}
		}
		if (i > n / 2 && n >= t) // ???????????n = n???????
		{
			n = 1;
			detach(n);
		}
	}
}
int main()
{
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a; // ???????
		detach(a); // ??????
		cout << num << endl; // ??????
		num = 0; // ????????0
		t = 2;
	}
	return 0;
}