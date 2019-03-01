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

int	fei(int k)
{
	int	f[21] = {0};
	f[1] = 1;
	f[2] = 1;
	int	i;
	for (i = 3; i <= 21; i ++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[k];
}
int main()
{
	int	i, n, a;
	cin >> n;
	
	for (i = 0; i < n; i ++)
	{
		cin >> a;
		cout << fei(a) << endl;
	}

	return 0;
}


