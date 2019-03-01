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
	int n,a[10000][2] = {0},i,k[2],tf = 1;
	cin >> n;
	while (1)
	{
		cin >> k[0] >> k[1];
		if ((k[0] == 0)&&(k[1] == 0))
			break;
		a[k[0]][0]++;
		a[k[1]][1]++;
	}
	for (i = 0;i < n;i++)
	{
		if ((*(*(a + i)) == 0)&&(*(*(a + i) + 1) == n - 1))
		{
			cout << i << endl;
			tf = 0;
		}
	}
	if (tf == 1)
		cout << "NOT FOUND" << endl;
	return 0;
}