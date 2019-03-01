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
	int n, i, p, q, j,k,  person[10000], flag = 0;
	cin >> n;
	for (j = 0; j < 10000; j++)
	{
		person[j] = 0;
	}
	while ((cin >> p) && (cin >> q))
	{
		if ((p == 0) && (q == 0))
		{
			break;
		}
		else
		{
			person[p]--;      // ???p???????????????-1
		    person[q]++;     // p?????????q?????????
		} 
	}
	for (k = 0; k < n; k++)
	{
		if (person[k] == n - 1)
		{
			flag = 1;
			cout << k << endl;
		}
	}
	if (!flag)
	{
		cout << "NOT FOUND";
	}
	return 0;
}
		