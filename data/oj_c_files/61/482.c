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


int main ()
{
	int f[21];
	f[0] = 1;
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= 20; i ++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		int a;
		cin >> a;
		cout << f[a] << endl;
	}
		
	return 0;
}