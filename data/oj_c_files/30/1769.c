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

int res[102];
int n;
int main()
{
	cin >> n;
	memset(res, 0, sizeof(n));
	for(int i = 1; i <= 100; i++)
	{
		if(i % 10 == 7 || i % 7 == 0 || i / 10 == 7)
			res[i] = res[i - 1];
		else
			res[i] = res[i-1] + i * i;
	}
	cout << res[n] <<endl;
	return 0;
}