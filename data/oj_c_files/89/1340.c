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
	int n, a, b, max, maxone;
	int person[99999] = {0};
	cin >> n;
	max = 0;
	maxone = -1;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
			break;
		person[b] ++;
		if (person[b] > max)
		{
			max = person[b];
			maxone = b;
		}
	}
	if (max == n - 1)
		cout << maxone << endl;
	else
		cout << "NOT FOUND" << endl;
	return 0;
}