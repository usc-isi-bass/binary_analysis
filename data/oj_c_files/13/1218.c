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
	int a[20000];
	int i, j;
	int sum;

	cin >> n;
	sum = n;
	for(i = 0; i < n; i ++)
		cin >> a[i];
	for(i = 0; i < n; i ++)
	{
		if(a[i] == 0)
			continue;
		for(j = i + 1; j < n; j ++)
		{
			if(a[j] == a[i])
			{
				a[j] = 0;
				sum --;
			}
		}
	}
	j = 0;
	for(i = 0; i < n; i ++)
	{
		if(a[i] == 0)
			continue;
		cout << a[i];
		j ++;
		if( j != sum)
			cout << ' ';
	}
	return 0;
}