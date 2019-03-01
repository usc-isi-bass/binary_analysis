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
	int a[1001], b[1001], i, m, k, max, num;
	char c, d;
	i = 1;
	k = 1;
	max = 0;
	num = 0;
    do
	{
		cin >> a[i];
		c = cin.get();
		i = i + 1;
	}while(c == ',');
    do
	{
		cin >> b[k];
		d = cin.get();
		k = k + 1;
	}while(d == ',');
	for(m = 0; m < 1000; m++)
	{
        for(i = 1; i < k; i++)
		{
		    if(a[i] <= m&&b[i] > m)
			num = num + 1;
		}
	    if(num > max)
		max = num;
	    num = 0;
	}
	cout << k - 1 << " " << max << endl;
	return 0;
}
