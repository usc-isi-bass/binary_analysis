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
	int a[15], b, n = 0, num = 0;
	while (cin >> b)
	{
		if (b == -1)
		break;
		else if (b == 0)
		{
			for (int i=0;i<n;i++)
			for (int j=i;j<n;j++)
			if (a[i] == 2 * a[j] || a[j] == 2 * a[i])
			num++;
			n = 0;
			cout << num << endl;
			num = 0;
		}
		else
		{
			a[n] = b;
			n++;
		}
	} 
	return 0;
} 