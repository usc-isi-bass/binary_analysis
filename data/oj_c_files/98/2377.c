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
	int n, i, cnt[1000],sum;
	char w [1000][50];
	char *p = * w;
	cin >> n;
	for (i = 0; i < n;i ++)
	{
		cin >> *(w + i);
	}

	for (i = 0; i < n; i++)
	{
		cnt[i] = strlen(*(w + i));
	}
	sum = 0;
	for (i = 0; i < n;i ++)
	{
		sum = sum + cnt [i];
		if (sum > 80)
		{
			cout << endl;
			cout << w [i] << " ";
			sum = cnt [i] + 1;
		}
		else
		{
			cout << w[i];
			if (sum + cnt [i + 1] + 1<= 80 && i != n -1)
				cout << " ";
			sum = sum + 1;
		}
	}
	return 0;
}
			
