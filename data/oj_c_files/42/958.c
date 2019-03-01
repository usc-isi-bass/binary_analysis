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
	int num[100000];
	int n, i, del;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> num[i - 1];
	}
	cin >> del;
	int wNo, sNo, count = 0;
	for (wNo = 0; wNo < n - count; wNo++)
	{
		if (del == num[wNo])
		{
			for (sNo = wNo; sNo < n - count; sNo++)
			{
				num[sNo] = num[sNo + 1];
			}
			count += 1;
			wNo = -1;
		}
	}
	int oNo;
	for (oNo = 1; oNo < n - count; oNo++)
	{
		cout << num[oNo - 1] << " ";
	}
	cout << num[oNo - 1] << endl;
	return 0;
}