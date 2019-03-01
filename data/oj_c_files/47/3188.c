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
	cin >> n;				//n?????
	int first [100] = {0};
	for (int i = 0;i <= n-1;i++)
	{
		cin >> first[i];
	}
	for (int i = 0;i <= n-1;i++)
	{
		if (i != n-1)
			cout << first[n-1-i] <<" ";
		else
			cout << first[n-1-i];
	}
	cin.get();
	cin.get();
	return 0;
}