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
	int num[30];
	int count[30];
	cin >> n;
	int i;
	int j;
	for(i = 0; i < n; i ++)
	{
		cin >> num[i];
		count [i] = 1;
	}
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < i; j ++)
		{
			if(num[i] <= num[j])
			{
				if(count[i] < count[j] + 1)
				{
					count[i] = count[j] + 1;
				}
			}
		}
	}
	int max = 1;
	for(i = 0; i < n; i ++)
	{
		if(count[i] > max)
		{
			max = count[i];
		}
	}
	cout << max << endl;
	return 0;
}