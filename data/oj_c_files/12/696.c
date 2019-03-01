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
	int a[16] = {0}, i = 1, num[16] = {0}, s, k = 0;
		while (cin >> s)
		{
			a[i] = s;
			if (a[i] == 0) {i = 0; k++; continue;}
			if (a[i] == -1) break;
			for (int j = 0 ; j <= i ; j++)
			{
				if (a[i] == 2 * a[j] || a[j] == 2 * a[i])
					num[k]++;
			}
		    i++;
		}
		for (i = 0 ; i < k ; i++)
		{
			cout << num[i] <<endl;
		}
	return 0;
}