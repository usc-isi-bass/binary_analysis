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
	int i, j, n, flag = 0, a[10000] = {0}, b[10000] = {0};
	cin >> n;
	while(cin >> i >> j)
	{
		if(i == 0 && j == 0)
		{
			break;
		}
		a[i] = a[i] + 1;
		b[j] = b[j] + 1;
	}
	for(i = 0 ; i < n ; i++)
	{
		if(a[i] == 0 && b[i] >= n - 1)
		{
			cout << i << endl;
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}
	