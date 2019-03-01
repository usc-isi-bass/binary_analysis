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
	int n;
	cin >> n;
	int count[100] = {0}, num[90] = {0};
	int i = 1, a, j = 0;
	for (i; i <= n; i++)
	{
		cin >> a;
		if (count[a] == 0)
		{
			num[j] = a;
			j += 1;
		}
		count[a] = count[a] + 1;
	}
	i = 0;
	for (i; i < j - 1; i++)
	{
		cout << num[i] << " ";
	}
	cout << num[j - 1] << endl;
	return 0;
}