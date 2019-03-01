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
	int mark[101];
	for (int i = 0; i < 101; i++)
		mark[i] = 0;
	int num[20005];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	cout << num[0];
	mark[num[0]] = 1;
	for (int i = 0; i < n; i++)
	{
		if (mark[num[i]] == 0)
		{
			mark[num[i]] = 1;
			cout << " " << num[i];
		}
	}
	cout << endl;
	return 0;
}