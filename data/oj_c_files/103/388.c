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
	char x;
	char a[1000];
	int len,i,count = 0;
	cin >> a;
	len =strlen(a);
	if (a[0] >= 65 && a[0] <= 90)
	    x = a[0];
	else x = a[0] - 32;
	cout << '(' << x << ',';
	for (i = 0;i < len;i++)
	{
		if (a[i] == x || a[i] - 32 == x)
			count++;
		else
		{
			cout << count << ')';
			count = 1;
			if (a[i] >= 65 && a[i] <= 90)
	            x = a[i];
	        else x = a[i] - 32;
			cout << '(' << x << ',';
		}
	}
	cout << count << ')';
	return 0;
}

