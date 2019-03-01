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
	int a[16], i, j, k , num;
	do
	{
		num = 0;
		k = 0;
		cin >> a[0];
		if (a[0] == -1) break; 
		for (i = 1; i <= 15; i ++)
		{
			cin >> a[i];
			if (a[i] == 0) break;
			k ++;
		}
		for (i = 0; i <= k; i ++)
			for (j = 0; j <= k; j ++)
				if (a[i] == 2 * a[j])
					num ++;
		cout << num << endl;
	} while(1);
	return 0;
} 
