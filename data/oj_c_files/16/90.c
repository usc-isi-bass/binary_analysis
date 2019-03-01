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
	char zhengshu[10001];
	cin.getline(zhengshu, 10001);
	int length = strlen(zhengshu), i, a[10000];
	for (i = 0; i < length; i++)
	{
		a[i] = zhengshu[i] - '0';
	}
	for (i = length - 1; i >= 0; i--)
	{
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
