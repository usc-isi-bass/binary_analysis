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


int main()
{
	char a[105];
	int b[105] = {0};
	int i, j = 0, t = 0, k, res, remain;
	cin >> a;
	for(i = 0;a[i] != '\0';i++)
	{
		if((a[i + 1]) == '\0')
		{
			t = (t * 10) + a[i] -'0';
			res = t / 13;
			b[j] = res;
			j++;
			remain = t - res * 13;
			break;
		}
		else
		{
			t = (t * 10) + a[i] - '0';
			res = t / 13;
			if((res == 0) && (b[0] == 0))
				continue;
			else
			{
			    b[j] = res;
				j++;
			}
			t = t - res * 13;
		}
	}
	for (i = 0; i < j; i++)
	    cout << b[i];
	cout << endl;
	cout << remain;

    return 0;
}