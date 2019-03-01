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

void apple(int, int);
int n, k, m, f = 0;

int main()
{
	cin >> n >> k;
	while(1)
	{
		apple(m, n);
		if(f == 1)
			break;
		m++;
	}
	cin >>m;
	return 0;
}

void apple(int h, int p)
{
	if(p == 1)
	{
		if((h - k) / n <= 0)
			return;
		else
		{
			if((h - k) % n == 0)
			{
				cout << m << endl;
				f = 1;
			}
			else
				return;
		}
	}
	if((h - k) % n == 0)
		apple(h - k - ((h - k) / n), p - 1);
	else
		return;
}