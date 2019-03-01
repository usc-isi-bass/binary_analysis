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
	int a[1000][2], i = 0, j , sum, max = 0, b[1001] = {0};
	do
	{
		cin >> a[i][0];
		i++;
	}while(cin.get() == ',');
	sum = i;
	i = 0;
	do
	{
		cin >> a[i][1];
		i++;
	}while(cin.get() == ',');
	for(i = 0; i < sum; i++)
	{
		for(j = a[i][0]; j < a[i][1]; j++)
			b[j]++;
	}
	for(i = 1; i <= 1000; i++)
	{
		if(b[i] > max)
			max = b[i];
	}
	cout << sum << ' ' << max;
	return 0;
}