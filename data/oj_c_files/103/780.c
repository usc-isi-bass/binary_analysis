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
	char a[1001];
	int i, j, count = 1, len;
	cin.getline(a, 1001);
	len = strlen(a);
	for (i = 0; i <= strlen(a); i++)
	{
		if (a[i] > 'Z')
			a[i] = a[i] - ('a' -'A');
		if (i == 0)
			continue;
		if (a[i] == a[i - 1])
		{
			count++;
		}
		else
		{
			cout << "(" << a[i - 1] << "," << count << ")";
			count = 1;
		}
	}
	return 0;
}
