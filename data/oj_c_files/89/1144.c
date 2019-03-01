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

//******************************************************
//* ?????????
//* ????? 1200012858
//* ???2012-12-15
//******************************************************

struct people
{
	int p;
	int q;
	int f;
}pp[100000];

int main()
{
	int n, i = 0, count = 0;
	int num[10000] = {0};
	cin >> n;
    do
	{
		i++;
		cin >> pp[i].p >> pp[i].q;
		pp[i].f = 1;
		count++;         // count ?????????
	}while(pp[i].p != 0 || pp[i].q != 0);
	count--;
	for (i = 0; i < n; i++)
	{
		for (int j = 1; j <= count; j++)
		{
			if (pp[j].q == i)
				num[i]++;
		}
		if (num[i] == n - 1)
			cout << i << endl;
	}
	return 0;
}