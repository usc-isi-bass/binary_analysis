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


int a[50] = {0};

int length()
{
	int i;
	for (i = 49; i >= 0; i--)
		if (a[i] != 0)
			return (i + 1);
	return 0;
}

void power(int N)
{
	int i, temp, add = 0;
	if (N == -1)
		cout << "1" << endl;
	else if (N == 0)
	{
		for (i = length() - 1; i >= 0; i--)
			cout << a[i];
		cout << endl;
		return;
	}
	else
	{
		for (i = 0; i < length(); i++)
		{
			temp = add + a[i] * 2;
			a[i] = temp % 10;
			add = temp / 10;
		}
		a[i] = add;
		power(N - 1);
	}
}




int main()
{
	int N;
	a[0] = 2;
	cin >> N;
	power(N - 1);
	return 0;
}

