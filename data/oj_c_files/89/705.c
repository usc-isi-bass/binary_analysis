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

// ?????? ?? 1000062708
int main()
{
	int n, i, j, a[100000] = {0};
	cin >> n;
	do
	{
		cin >> i >> j;
		a[i]--;
		a[j]++;
	}while(i != 0 || j != 0);
	for(i = 0;i < n;i++)
		if(a[i] == n - 1)
		{
			cout << i << endl;
			break;
		}
	if(i == n)
		cout << "NOT FOUND" << endl;
	return 0;
}
