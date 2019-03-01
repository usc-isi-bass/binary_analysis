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


char boy;

int res(char str[], int n, int idx)
{
	if (str[idx] == boy)
	{
		int ridx = res(str, n, idx + 1);
		cout << idx << " " << ridx << endl;
		if (ridx < n - 1)
		{
			ridx = res(str, n, ridx + 1);
		}
		else
		{
			ridx = ridx + 1;
		}
		return ridx;
	}
	else
	{
		return idx;
	}
}
int main()
{
	char str[102];
	cin >> str;
	boy = str[0];
	res(str, strlen(str), 0);
	return 0;
}

