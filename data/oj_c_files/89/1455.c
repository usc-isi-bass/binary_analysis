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
	int i, n, x, y;
	int know[10000], beknown[10000];
	for (i = 0; i < 10000; i ++)
	{know[i] = 0; beknown[i] = 0;}
	cin >> n;
	int *p = know;
	int *q = beknown;
	while (1)
	{
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;
		(*(p + x))++;
		(*(q + y))++;
	}
	int flag = 1;
	for (i = 0; i < n; i ++)
		if (know[i] == 0 && beknown[i] == n - 1)
		{
			flag = 0;
			cout << i << endl;
			break;
		}
	if (flag)
		cout << "NOT FOUND" << endl;
	return 0;
}
