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
	int a[16], i, j, k;
	while (1)
	{
		int n = 0, sum = 0;
		for (i = 0; ; i ++)
		{
			cin>>a[i];
			if (a[i] == -1)
				break;
			else
			{
				if (a[i] != 0)
					n ++;
				else
					break;
			}
		}
		if (a[0] == -1)
			break;
		for (j = 0; j < n; j ++)
		{
			for (k = 0; k < n; k ++)
			{
				if (a[j] == 2 * a[k])
					sum ++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}