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
	int n[25], i, j, count;
	while (cin >> n[1], n[1] != -1)
	{
		count = 0;
		for (i = 2; cin >> n[i], n[i] != 0; i++)
		{
			for (j = 1; j < i; j++)
			{
				if (n[i] == 2 * n[j] || n[i] * 2 == n[j])
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}