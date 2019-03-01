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
	int i = 1, k = 0;
	cin.getline(a, 1001);
	while(1)
	{
		if (a[i] == a[i - 1] || (a[i] - a[i - 1]) == 32 || (a[i] - a[i - 1]) == -32)
		   k++;
		else
		{
			if ((a[i - 1] - 'a') >= 0)
				a[i - 1] -= 32;
			cout << "(" << a[i - 1] << "," << k + 1 << ")";
			k = 0;
		}
		if (a[i] == '\0')
			break;
		i++;
	}
	return 0;
}
