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
	int k, most;
	int a[25], f[25];
	cin >> k;
	for(int i = 0 ; i < k ; i++)
	{
		cin >> a[i];
	}
	f[0] = 1;
	for(int i = 1; i < k; i++)
	{
		most = 0;
		for(int j = 0; j < i; j++)
		{
			if(a[j] >= a[i])
			{
				if(f[j] > most)
				{
					most = f[j];
				}
			}
		}
		f[i] = most+1;
	}
	most = 0;
	for(int i = 0; i < k; i++)
	{
		if(f[i] > most)
			most = f[i];
	}
	cout << most << endl;
	return 0;
}