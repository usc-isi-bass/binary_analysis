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
	int n[100001], valid;
	cin >> valid;
	for (int i = 1; i <= valid; i++)
		cin >> n[i];
	int d;
	cin >> d;
	int j = 1, Do = valid;
	while (Do)
	{
		if (n[j] == d)
		{
			for (int k = j; k < valid; k++)
				n[k] = n[k + 1];
			valid--;
			Do--;
		}
		else
		{
			Do--;
			j++;
		}
	}
	for (int i = 1; i <= valid; i++)
	{
		cout << n[i];
		if (i - valid)
			cout << ' ';
	}

	return 0;
}